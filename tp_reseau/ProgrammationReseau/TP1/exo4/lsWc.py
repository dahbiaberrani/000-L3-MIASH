import os
import sys

# passer un fichier un paramètre
if len(sys.argv) != 2:
    print(f"Aide: il faut passer un fichier un paramètre après {sys.argv[0]}")
    sys.exit(1)

fils1 = os.fork()

if fils1 == 0:
    # On est donc dans le fils...
    print(f"Je suis le premier fils {os.getpid()}")
    print("Execution du ls")
    os.execlp("ls", "ls", sys.argv[1])
   
else:
    # on est donc dans le p`ere...on crée le second fils
    fils2 = os.fork()
    #(pid, status) = os.wait()
    
    if fils2 == 0:
        # On est donc dans le fils...
        print(f"Je suis le deuxième fils {os.getpid()}")
        print("Execution du wc")
        os.execlp("wc", "wc", sys.argv[1])
        
    #print("le calcul est terminé")    
    
    try:
        for i in range (0,2) :
            (Id,Status)= os.wait()
    except ChildProcessError: 
        # Le fils s’´etait d´ej`a termin´e : wait() a ´echou´e
        pass
    finally:
        print("Le calcul est terminé")
