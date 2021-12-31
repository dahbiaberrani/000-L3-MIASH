import Document


class Multi_imprimable(Document):


    def __init__(self, name):
        self.name = name

    def imprime(self):

        print(f"L’impression du document {self.name} est lancée")
