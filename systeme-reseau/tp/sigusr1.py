import signal,sys
nb_sigint = 0
def handler(sig, _):
    if sig == signal.SIGINT:
        print("aucun effet...")
    elif sig == signal.SIGTERM:
        print("je boucle sans fin. Arrêtez-moi avec un kill -USR1 12681")
    elif sig == signal.SIGUSR1:
        while False: pass 
        print("le processus s'arrête et affiche Ok, signal reçu, je m'arrête...")
        
signal.signal(signal.SIGINT, handler)
while True: pass
