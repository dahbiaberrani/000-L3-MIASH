import os, sys

# passer un fichier un paramètre
if len(sys.argv) < 2:
    print(f"Aide: il faut passer au moins un fichier un paramètre après {sys.argv[0]}")
    sys.exit(1)

for i in range(len(sys.argv)) :
    
    if os.fork() == 0 :
       # On est dans le fils
       print("Je suis le fils ",i," et j'affiche le parametre ",i," : ",sys.argv[i] )
       exit(0)
# attente de fin d'execution des fils 
   
try:
   for i in range(len(sys.argv) -1):
       os.wait()
except ChildProcessError: 
   # Le fils s’´etait d´ej`a termin´e : wait() a ´echou´e
   pass
finally:
   print("Calcul terminé")


