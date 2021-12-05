import abc;
import pprint;
from Paquet import Paquet

class Noeud(metaclass=abc.ABCMeta):

    def create(self, adresse, noeud_suivant=None):
        print("Create Noeud")
        self.adresse = adresse
        self.noeud_suivant = noeud_suivant

    # def __init__(self, adresse, noeud_suivant=None):
    #     print("Creation de Noeud")
    #     self.adresse = adresse
    #     self.noeud_suivant = noeud_suivant

    def get_adresse(self):
        return self.adresse
        
    def get_noeud_suivant(self):
        return self.noeud_suivant
    
    def transmettre(self, paquet):
        self.noeud_suivant.recevoir(paquet)

    def set_noeud_suivant(self, noeud_suivant):
        self.noeud_suivant = noeud_suivant

    def recevoir(self, paquet):
        pp = pprint.PrettyPrinter(indent=4)
        # print(f'Paquet RECU : {vars(paquet)}')
        print("Reception du paquet par Noeud...")
        if (self.adresse == paquet.adresse_recp):
            self.traiter(paquet)
        else:
            print(f'Noeud transmet le paquet')
            # print(f'Noeud transmet le paquet (seld.adresse : {self.adresse} || paquet.adresse_recp : {paquet.adresse_recp} )')
            self.transmettre(paquet) 


    @abc.abstractclassmethod
    def traiter(self, paquet):
        pass