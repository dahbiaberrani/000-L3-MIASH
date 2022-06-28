from socket import *
import sys

if len(sys.argv) != 2:
	print(f"Usage: {sys.argv[0]} <ip> <port>", file=sys.stderr)
	sys.exit(1)
	
TAILLE_TAMPON = 256

with socket(AF_INET, SOCK_DGRAM) as sock:

	# Remarque : pas besoin de bind car le port local est choisi par le systeme	
	mess = input("Entrez une commande (help pour la liste, quit pour quitter) :")
	
	# Envoi de la requ^ete au serveur (ip, port) apres encodage de str en bytes
	sock.sendto(mess.encode(), (sys.argv[1], int(sys.argv[2])))
	
	# Réception de la réponse du serveur et décodage de bytes en str
	reponse, _ = sock.recvfrom(TAILLE_TAMPON)
	
	print("Réponse = " + reponse.decode())
