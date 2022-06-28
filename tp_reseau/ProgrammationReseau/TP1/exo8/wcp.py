import sys, os, os.path

def check_syntaxe(liste):
  for nomfic in liste:
    if not nomfic.endswith(".txt"):
      print(f"Erreur: {nomfic} n'est pas un fichier C", file=sys.stderr)
      exit(2)

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
    if os.fork() == 0: # Le fils  lance wcp
      #os.execlp("c99", "c99", "-c", fic) 
      os.execlp("wc", "wc", "-l", fic) 

  # traitement effectué par le père après avoir lancé toutes les compilations 

  # attente de la fin des compilations 
  linker = True   # soyons optimiste...
  for fils in liste_sources: # il y a autant de fils à attendre que de fichiers source...
    (pid, status) = os.wait()
    if status != 0:
      linker = False  # il y a eu une erreur de compil

  # Si tout s'est bien passé : 
  if linker:
    pass
    
  else:  
    print("erreur de compilation", file=sys.stderr)
    exit(1)



