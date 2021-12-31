class Element:

    def __init__(self, nlig, ncol):
        self.__line = nlig
        self.__row = ncol
        self.esttoucher = False

    def estTouche(self, nlig, ncol):
        if self.__line == nlig and self.__row == ncol:
            self.esttoucher = True
            return self.esttoucher
        else:
            self.esttoucher = False
            return self.esttoucher

    def toucher(self):
        self.esttoucher = True

    @property
    def lig(self):
        return self.__line

    @property
    def col(self):
        return self.__row

    def __str__(self):
        res = ""
        res += "|" + str(self.__line) + "|" + str(self.__row) + "|"
        return res

    def __eq__(self, elt):
        if isinstance(elt, Element):
            return self.lig == elt.lig and self.col == elt.col
        return False
