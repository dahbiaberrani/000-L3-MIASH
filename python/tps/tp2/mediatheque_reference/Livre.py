import Texte as Texte
class Livre(Texte):
    """class representant un livre"""
    def __init__(self, edit, anneep):
        self.editeur = edit
        self.anneeparution = anneep