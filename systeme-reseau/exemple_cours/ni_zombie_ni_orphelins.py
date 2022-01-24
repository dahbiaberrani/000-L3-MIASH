import os, signal
if os.fork() == 0:
    print(f"Je suis le fils : {os.getpid()}")
    os._exit(0)

signal.signal(signal.SIGCHLD, lambda sig, frame: os.wait())
print(f"Je suis le père : {os.getpid()}")
print("Mon fils n’est pas un zombie (vérifier avec la commande ’ps -ax’)")
input("Tapez sur Entrée pour continuer...")
# Ce n’est pas parce qu’on chasse les zombies qu’il faut faire des orphelins...
# Le père ne doit pas se terminer avant ses fils !
try:
    os.wait()
except ChildProcessError:
# Le fils s’était déjà terminé : wait() a échoué
    pass
finally:
    exit(0)
# Dans tous les cas, on termine le père