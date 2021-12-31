from Bateau import *


class SousMarin(Bateau):

    def __init__(self, line, row, aligne):
        self.__vie = 1
        super().__init__(line, row, aligne, self.__vie)

    def est_touche(self, line, row):
        for element in self.coord:
            if element.esttoucher and element.estTouche(line, row):
                return 2
            if not element.esttoucher and element.estTouche(line, row) and (line == 0 or row == 0):
                self.vie -= 1
                self.coord.remove(element)
                if self.vie <= 0:
                    return 3
                return 1
        return 0

    @property
    def vie(self):
        return self.__vie

    @vie.setter
    def vie(self, val):
        self.__vie = val

    def __str__(self):
        return str(type(self).__name__)
