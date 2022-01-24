import os

from uaclient import status

if os.fork() == 0:
    print(f"Je suis le fils : {os.getpid()}")
    os._exit(0)

print(f"Je suis le père : {os.getpid()}")
input("Vérifiez que le fils est zombie avec ps -axl et tapez return pour continuer")
(pid, status) = os.wait()

input("Vérifiez que le fils n'est plus zombie avec ps -axl et tapez return pour continuer")
if status == 0:
    print("le fils s'est terminé normalement")
else:
    print("le fils s'est mal terminé")
exit(0)