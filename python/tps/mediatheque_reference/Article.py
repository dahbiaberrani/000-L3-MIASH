import Texte as Texte


class Article(Texte):
    """class representant un article"""

    def __init__(self, revue, edit, num):
        self.titre_revue = revue
        self.editeur = edit
        self.num_edition = num
