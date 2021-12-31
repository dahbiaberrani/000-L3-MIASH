import Texte


class Livre(Texte):

    def __init__(self, edit, annee):
        self.editeur = edit
        self.annee_parution = annee
