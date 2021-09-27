from Noeud import Noeud

class Imprimante(Noeud):
      
    def __init__(self, adresse, noeud_suivant=None):
        # super().__init__(adresse = adresse, noeud_suivant=noeud_suivant)
        self.create(adresse, noeud_suivant)

    def traiter(self, paquet):
        print("Impression du paquet en cours...")
        print(f' Paquet imprimé {vars(paquet)}')
        print(f' Mes infos : {vars(self)}')
