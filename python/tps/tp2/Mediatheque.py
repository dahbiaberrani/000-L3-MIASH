class Mediatheque:

    def __init__(self, nom):
        self.nom = nom
        self.dic_document = {}

    def ajouter(self,nomDomcument, idDocument):
        Document = (nomDomcument,idDocument)
        self.dic_document.