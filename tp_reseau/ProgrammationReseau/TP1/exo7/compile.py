import sys, os, os.path

def check_syntaxe(liste):
  for nomfic in liste:
    if not nomfic.endswith(".c"):
      print(f"Erreur: {nomfic} n'est pas un fichier C", file=sys.stderr)
      exit(2)

def suppr_erreurs_ou_obj(liste, extension):
  # Supprime les fichier erreur (extension = ".e") ou objets (extension = ".o")
  for nomfic in liste:
    os.unlink(nomfic.replace(".c", extension))

# Prog principal

if __name__ == '__main__':

  if (len(sys.argv) == 1):
    print("Usage: {} Il manque des parametres : par1 par2... parN".format(sys.argv[0]), file=sys.stderr) 
    exit(1)

  # Le nom du programme compilé doit être celui du dernier fichier
  programme = sys.argv.pop()
  liste_sources = sys.argv[1:]  # on élimine le nom du script Python de argv
  
  check_syntaxe(liste_sources)

  # Création d'un fils par fichier
  for fic in liste_sources: 
    if os.fork() == 0: # Le fils redirige les erreurs et lance gcc
      fic_err = os.open(fic.replace(".c", ".e"), os.O_CREAT|os.O_WRONLY|os.O_TRUNC)
      os.dup2(fic_err, 2)
      os.execlp("c99", "c99", "-c", fic) 

  # traitement effectué par le père après avoir lancé toutes les compilations 

  # attente de la fin des compilations 
  linker = True   # soyons optimiste...
  for fils in liste_sources: # il y a autant de fils à attendre que de fichiers source...
    (pid, status) = os.wait()
    if status != 0:
      linker = False  # il y a eu une erreur de compil

  # Si tout s'est bien passé : suppression des fichiers .e et édition de liens 
  if linker:
    # Suppression des fichiers .e (qui doivent être vides...)
    suppr_erreurs_ou_obj(liste_sources, ".e")
    
    # Construction de la liste correspondant à la commande d'édition de liens
    liste = ["c99"]
    for fic in liste_sources:
      liste.append(fic.replace(".c", ".o")) # construction de la liste des .o 
      
    # ajout du nom de l'exécutable
    liste.append("-o")
    liste.append(programme)
    os.execvp("c99", liste)
  else:  
    print("erreur de compilation : consultez les fichiers d'erreur", file=sys.stderr)
    exit(1)



