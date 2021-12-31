from Element import *


class Bateau:

    def __init__(self, line, row, aligne, vie):
        self.__coord = []
        self.vie = vie
        if (vie <= 3) and (vie >= 1):
            if aligne:
                for i in range(vie):
                    self.__coord.append(Element(line, row + i))
            else:
                for i in range(vie):
                    self.__coord.append(Element(line + i, row))

    def est_touche(self, lig, col):
        for element in self.coord:
            if element.esttoucher and element.estTouche(lig, col):
                return 2
            if not element.esttoucher and element.estTouche(lig, col):
                self.vie -= 1
                self.coord.remove(element)
                if self.vie <= 0:
                    return 3
                return 1
        return 0

    @property
    def elements(self):
        return self.elements

    @property
    def coord(self):
        return self.__coord
