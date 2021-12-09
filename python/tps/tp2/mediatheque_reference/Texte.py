import Documents as Documents


class Texte(Documents.Documents):
    """Class representant un document textuel"""

    def __init__(self, name):
        self.name = name

    def imprime(self):
        """imprime le document"""
        print(f"L’impression du document {self.name} est lancée")
