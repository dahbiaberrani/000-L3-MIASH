import os, sys,os.path


a = int(input("veuillez rentre un nombre"))
b = int(input("veuillez rentre un nombre"))

fils1 = os.fork()

if fils1 == 0:
    print(f"jesuis le premier fils{os.getpid()} et je fait l'addition")
    c = a+b
    print("le resultatde ",a, "+",b ,"=", c)
    exit(0)
else:
    fils2 = os.fork()
    if fils2 == 0:
        print(f"je suis dans deuxième fils {os.getpid()} et je fait la multiication ")
        c = a*b
        print("le resltat de ", a, "*", b, "=", c)
        exit(0)
    try:
        for i in range(0,2):
            (Id, Status)=os.wait()
    except ChildProcessError:
        pass
    finally:
        print("le calcule est terminé")