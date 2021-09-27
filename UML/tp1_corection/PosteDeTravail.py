from Paquet import Paquet
from Noeud import Noeud

class PosteDeTravail(Noeud):

    def __init__(self, adresse, noeud_suivant=None):
        # super().__init__(adresse = adresse, noeud_suivant=noeud_suivant)
        self.create(adresse, noeud_suivant)

    def traiter(self, paquet):
        print("Traitement du paquet en cours...")
        print(f' Paquet traité {vars(paquet)}')
        print(f' Mes infos : {vars(self)}')

    def creer_paquet(self, numero, contenu, adresse_recp, paquet=None):
        paquet = Paquet(numero=numero, contenu=contenu, adresse_em=self.adresse, adresse_recp=adresse_recp)
        self.transmettre(paquet=paquet)