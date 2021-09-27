
class Paquet():

    def __init__(self, numero, contenu, adresse_em, adresse_recp):
        self.numero = numero
        self.contenu = contenu
        self.adresse_em = adresse_em
        self.adresse_recp = adresse_recp

    def get_numero(self):
        return self.numero
        
    def get_contenu(self):
        return self.contenu
        
    def get_adresse_em(self):
        return self.adresse_em
        
    def get_adresse_recp(self):
        return self.adresse_recp
