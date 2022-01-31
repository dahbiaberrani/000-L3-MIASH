import signal,sys,os
mon_pid = os.getpid()
print(mon_pid)
boucler = True
nb_sigint = 0
def handler(sig, _):
    global boucler
    if sig == signal.SIGINT:
        print("     aucun effet...")
    elif sig == signal.SIGTERM:
        print("je boucle sans fin. Arrêtez-moi avec un kill -USR1 ",mon_pid)
    elif sig == signal.SIGUSR1:
        print("Ok, signal reçu, je m'arrête...")
        boucler = False
        
signal.signal(signal.SIGINT, handler)
signal.signal(signal.SIGTERM, handler)
signal.signal(signal.SIGUSR1, handler)



while boucler: pass
