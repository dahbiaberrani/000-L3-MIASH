import threading
import time

int nb_violents = 3
int nb_archets = 1   


# threads

violoniste1 = threading.Thread(target=time.sleep, args=(5,))

violoniste2 = threading.Thread(target=time.sleep, args=(5,))

violoniste3 = threading.Thread(target=time.sleep, args=(5,))


violoniste1.start()
violoniste2.start()
violoniste3.start()

for t in threading.enumerate():
	if t != threading.main_thread(): 
		t.join()
		
		
print("fini")		
		
def void musicien(n):
	for i in range(3) :
		if nb_violents > 0 :
		    print("Il prend un violon")
			nb_violents -- 
		
		if nb_archets > 0 :
		print("Il prend un archet")
			nb_archets-- 
			
mutex = threading.Semaphore() 



class violoniste(threading.Thread):
	def run(self):
		if ( #
			mutex_nb_violents.acquire()
			print("I prend un violon", end=" ")
			mutex_pong.release()
			
	gg  class violon  :
			
class Pong(threading.Thread):
	def run(self):
		for i in range(100): # 
			mutex_pong.acquire()
			print("Pong")
			mutex_ping.release()
			
# Prog principal
for t in threading.enumerate():
	if t != threading.main_thread(): 
		t.join()

