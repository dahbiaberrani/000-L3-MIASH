import os
import sys

a = int(input("veuillez entrer un entier : "))

b = int(input("veuillez entrer un autre entier : "))

fils1 = os.fork()

if fils1 == 0:
    # On est donc dans le fils...
    print(f"Je suis le premier fils {os.getpid()} et je fais une addition")
    c = a + b
    print("le resultat de ",a," + ",b," est : ",c)
    exit(0)
else:
    # on est donc dans le p`ere...on crée le second fils
    fils2 = os.fork()
    #(pid, status) = os.wait()
    
    if fils2 == 0:
        # On est donc dans le fils...
        print(f"Je suis le deuxième fils {os.getpid()} et je fais une multiplication")
        c = a * b
        print("le resultat de ",a," * ",b," est : ",c)
        exit(0)
    #print("le calcul est terminé")    
    
    try:
        for i in range (0,2) :
            (Id,Status)= os.wait()
    except ChildProcessError: 
        # Le fils s’´etait d´ej`a termin´e : wait() a ´echou´e
        pass
    finally:
        print("Le calcul est terminé")
