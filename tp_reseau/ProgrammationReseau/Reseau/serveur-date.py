import socket
import sys

# Fonction pour calculer la date de paques
def datepaques(an):
    """Calcule la date de Pâques d'une année donnée an (=nombre entier)"""
    a=an//100
    b=an%100
    c=(3*(a+25))//4
    d=(3*(a+25))%4
    e=(8*(a+11))//25
    f=(5*a+b)%19
    g=(19*f+c-e)%30
    h=(f+11*g)//319
    j=(60*(5-d)+b)//4
    k=(60*(5-d)+b)%4
    m=(2*j-k-g+h)%7
    n=(g-h+m+114)//31
    p=(g-h+m+114)%31
    jour=p+1
    mois=n
    return [jour, mois, an]
    
    
if len(sys.argv) != 2:
	print(f"Usage: {sys.argv[0]} <port>", file=sys.stderr)
	sys.exit(1)
	
TAILLE_TAMPON = 256

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Liaison de la socket a toutes les IP possibles de la machine
sock.bind(('', int(sys.argv[1])))

print("Serveur en attente sur le port " + sys.argv[1], file=sys.stderr)

while True:

	try:
		# Récupération de la requete du client
		requete = sock.recvfrom(TAILLE_TAMPON)
		
		# Extraction du message et de l’adresse sur le client
		(mess, adr_client) = requete
		ip_client, port_client = adr_client
		
		print(f"Requete provenant de {ip_client}. Longueur = {len(mess)}", file=sys.stderr)
		
		# Construction de la réponse
		reponse = mess.decode()
		if reponse=="date":
			reponse_envoye=datepaques(2022)
			print(reponse)
			# Envoi de la reponse au client
			sock.sendto(reponse_envoyee.encode(), adr_client)
	except KeyboardInterrupt: break
	
sock.close()
print("Arret du serveur", file=sys.stderr)
sys.exit(0)

