
import threading
import time

jouer= threading.Lock()
violent = threading.Condition(jouer)
archet= threading.Condition(jouer)


nb_violents_dispo = 3
nb_archets_dispo = 1  

def musicien(n) :
		global nb_violents_dispo, nb_archets_dispo
		with jouer :
		
		
# Thread principal
for i in range(10):
Inc().start() # Lancement de 10 threads
for t in threading.enumerate():
if t != threading.main_thread(): t.join()
print("Nbre de places occup´ees = {nb_places_occupees}") # 100000...
