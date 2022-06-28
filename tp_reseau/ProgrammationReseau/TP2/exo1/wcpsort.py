import os, sys


if len(sys.argv) < 2:
    print("Le fichier doit avoir au moins 1 argument.")
    exit()

echec = 0

liste_sources = sys.argv[1:]  # on élimine le nom du script Python de argv
  
'''
for i in liste_sources:
    if os.fork() == 0:
        #os.execlp("wc", "wc", "-l", i)
    
    (pid, status) = os.wait()

    if status != 0:
        echec = echec + 1
        
'''

argswcp=["python","wcp.py"]
for  arg in liste_sources :
   argswcp.append(arg)
    
    

print("Nombre de fils echoué : " , echec)

