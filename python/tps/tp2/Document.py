class Document:

    def __init__(self, auteur, titre):
        self.copyright = "null"
        self.auteur = auteur
        self.titre = titre

    def __str__(self):
        return self.titre + "," + self.auteur


    def afficher(self):
        return self.__init__(self.auteur, self.titre)