import threading 
import time


class semaphore:
    int compteur= 0
    mutex = threading.Lock()
    
    mutex.lock()
	def lock():
		
			
		
		
	def unlock() :
	    mutex.lock()
		compteur ++ 
		
		
	# Thread principal
	for i in range(10):
	Inc().start() # Lancement de 10 threads
	for t in threading.enumerate():
	if t != threading.main_thread(): t.join()
	print("Nbre de places occup´ees = {nb_places_occupees}") # 100000...
			
	   
