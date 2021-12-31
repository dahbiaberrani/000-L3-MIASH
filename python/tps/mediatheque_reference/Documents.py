class Document:
    """Class representant un document"""

    def __init__(self, auteur, titre, id):
        self.id = id
        self.auteur = auteur
        self.titre = titre

    def __str__(self):
        res = self.titre + "," + self.auteur
        return res




