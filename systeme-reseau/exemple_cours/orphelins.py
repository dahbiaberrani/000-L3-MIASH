import os, time
pid_fils = os.fork()
if pid_fils == 0:
    print(f"Je suis le fils : {os.getpid()}")
    time.sleep(20)
    os._exit(0)
print(f"Je suis le père : {os.getpid()}")
print("Vous avez 20 secondes pour vérifier "f"que le fils est orphelin avec ’ps -ef|grep {pid_fils}’")
exit(0) 