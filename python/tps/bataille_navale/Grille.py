from Bateau import Bateau
from Element import Element


class Grille:

    def __init__(self, nblig, nbcol):
        self.nbLig = nblig
        self.nbCol = nbcol
        self.ships = []

    def __iadd__(self, bateau):
        self.ships.append(bateau)
        return self

    def __str__(self):
        res = ""
        for i in self.ships:
            res += str(i) + " "
        return res

    def coup(self, line, row):

         if line < 0 or line > self.nbLig or row < 0 or row > self.nbCol:
              print("hors jeu")
         else:
          for bateau in self.ships:
              print(bateau, " :", bateau.est_touche(line, row))


    def display(self):
        liste_Elements = []
        for bateau in self.ships:
            for element in bateau.coord:
                liste_Elements.append(element)
        res = ""
        for line in range(self.nbLig):
            for row in range(self.nbCol):
               if Element(line, row) in liste_Elements:
                  res += "#"
               else:
                  res += "."
            res += "\n"
        print(res)
