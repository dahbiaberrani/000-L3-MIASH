import socket
import sys

if len(sys.argv) != 2:
    print(f"Usage: python {sys.argv[0]} <hote:port>\n", file=sys.stderr)
    sys.exit(1)
adresse, port = sys.argv[1].split(":")
sock_locale = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
while True:
    commande = input("Entrez une commande (quit pour quitter) : ")
    if commande.upper() == "QUIT":
        break
    sock_locale.sendto(commande.encode(), (adresse, int(port)))
    reponse, adresse = sock_locale.recvfrom(int(port))
    print(reponse.decode())

sock_locale.close()