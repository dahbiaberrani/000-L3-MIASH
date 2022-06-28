import os
import sys

if len(sys.argv) != 2:
    print(f"aide: il faut passer unfichier unnparametre aprs {sys.argv[0]}")
    sys.exit(1)
    
fils1 = os.fork()

if fils1 ==0 
    print(f"je suis dans le fils {os.getpid()}")
    print("exucutionde ls")
    os.excelp("ls", "ls", sys.argv[1])
    
else:
    fils2 = os.fork()
    if fils2 == 0:
        print(f"je suis le deuxième fils {os.getpid()}")
        print("exuction de wc")
        os.excelp("wc", "wc", sys.argv[1])
        
    try:
        for i in range(0,2):
            (Id, status) = os.wait()
    except childProcessError:
        pass 
    finally:
        print("le code est fini")