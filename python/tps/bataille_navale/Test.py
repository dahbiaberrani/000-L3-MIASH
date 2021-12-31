from Croiseur import Croiseur
from Escorteur import Escorteur
from SousMarin import *
from Grille import *


class Test:
    if __name__ == '__main__':
        b1 = Croiseur(1, 1, True)
        b2 = Escorteur(2, 5, False)
        b3 = SousMarin(4, 2, True)
        g1 = Grille(7, 9)
        g1 += b1
        g1 += b2
        g1 += b3
        print("---------------------bateaux utilisées -----------------------")
        print(g1)
        print("----------------------notre jeu ------------------------------ ")
        g1.display()
        print("------------------------- coup 1 : (-1,-1) ---------------------")
        g1.coup(-1, -1)
        print("----------------------- coup 2 : (6,8)--------------------------- ")
        g1.coup(6, 8)
        print("--------------------------- coup 3 : (2,5) ---------------------------  ")
        g1.coup(2, 5)
        print("--------------------------- coup 4 : (4,2) ---------------------------  ")
        g1.coup(4, 2)
        print("--------------------------- resultat finale ---------------------------  ")
        g1.display()
