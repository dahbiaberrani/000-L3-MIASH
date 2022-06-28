import os
import signal,sys



def handler(num_sig, frame): # Un handler doit avoir deux params
  print("je m'arrette")
  sys.exit(0)
  


print("je boucle sans fin. Arrêtez-moi avec un kill -USR1 2457")

signal.signal(signal.SIGINT, signal.SIG_IGN)
signal.signal(signal.SIGTERM, signal.SIG_IGN)

signal.signal(signal.SIGUSR1, handler) # association du handler

 
while True : pass
   
   
   
   


