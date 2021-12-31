from Bateau import *


class Escorteur(Bateau):

    def __init__(self, line, row, aligne):
        self.__vie = 2
        super().__init__(line, row, aligne, self.__vie)

    @property
    def vie(self):
        return self.__vie

    @vie.setter
    def vie(self, val):
        self.__vie = val

    def __str__(self):
        return type(self).__name__
