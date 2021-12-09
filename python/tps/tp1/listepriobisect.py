import bisect
import yaml
import copy


class ListePriorite:
    """ Implémentation d'une liste à priorité.
        Les éléments sont des tuples de la forme (prio, objet) où les priorités
        les plus fortes sont celles qui ont la valeur la plus petite
        (1, obj) est plus prioritaire que (10, obj)
    """

    def __init__(self):
        """ListePriorite() -> liste à priorité initialement vide"""
        self.__corps = []

    def __copy__(self):
        """copy.copy(L) -> copie en profondeur de L"""
        res = ListePriorite()
        res.__corps = self.__corps[:]
        return res

    def __add__(self, elt):
        """L + elt -> modifie L en ajoutant elt à sa place selon
           sa priorité"""
        bisect.insort(self.__corps, elt)  # Insertion dans une liste triée
        return self

    def __str__(self):
        """str(L) -> Représentation lisible de L sous forme de chaîne"""
        return str(self.__corps)

    def __getitem__(self, indice):
        """L[indice] -> élément à l'indice indiqué.
           Lève IndexError si l'indice n'est pas correct"""
        return self.__corps[indice]

    def __delitem__(self, indice):
        """del(L[indice]) -> Supprime de L l'élément d'indice indiqué.
           Lève IndexError si l'indice n'est pas correct"""
        del self.__corps[indice]
        return self

    def pop(self):
        """L.pop() -> Supprime et renvoie l'élément le moins prioritaire de L.
           Lève IndexError si l'indice n'est pas correct"""
        return self.__corps.pop()

    def __iter__(self):
        """Implémentation d'un itérateur sur les listes à priorité"""
        return self.items()

    def items(self):
        """L.items() -> itérateur sur les couples (priorite, obj) de L"""
        for elt in self.__corps:
           yield elt

    def vals(self):
        """L.vals() -> itérateur sur les objets contenus dans L, dans l'ordre de
        leurs priorités"""
        for (prio, val) in self:
            yield val

    def __contains__(self, obj):
        """obj in L -> teste si obj appartient à L"""
        return obj in self.vals()

    def __len__(self):
        """len(L) -> nombre d'éléments de L"""
        return len(self.__corps)

    def priorities_of(self, elt):
        """L.priorities_of(obj) -> Liste des priorités des différents
           occurrences de obj dans L."""
        return [prio for (prio, val) in self if val == elt]

    def dump(self, fic):
        """L.dump(fic) -> Sérialise L dans le fichier fic au format YAML"""
        with open(fic, "w") as fic:
            yaml.dump(self, fic)

    @classmethod
    def load(cls, file):
        """ListePriorite.load(fic) -> Renvoie la liste désérialisée à
            partir du fichier YAML fic."""
        return yaml.load(open(file, "r"), Loader=yaml.CLoader)

    def __prio(self, indice):
        """Renvoie la priorité de l'objet à l'indice indiqué"""
        if self.empty:
            return None
        prio, _ = self[indice]
        return prio

    @property
    def prio_min(self):
        """L.prio_min -> priorité la plus faible de L"""
        return self.__prio(0)

    @property
    def prio_max(self):
        """L.prio_max -> priorité la plus forte de L"""
        return self.__prio(-1)

    @property
    def empty(self):
        """L.empty -> teste si la file est vide"""
        return self.__corps == []


if __name__ == '__main__':
    daltons = ListePriorite()
    print(daltons.empty)  # True
    print(f"priorité min = {daltons.prio_min}, priorité max = {daltons.prio_max}")  # None, None

    daltons += (5, "Joe")
    daltons += (1, "Jack")
    daltons += (3, "Averell")
    daltons += (4, "William")
    daltons += (1, "Ma")
    daltons += (10, "Jack")
    daltons += (10, "Boo")

    print("Lucky Luke" in daltons)  # False
    print("Averell" in daltons)  # True

    print(daltons.priorities_of("Jack"))  # [1, 10]

    print(daltons)

    #daltons.pop()  # Supprime le dernier élément (10, "Jack")

    print(daltons)  # [(1, 'Jack'), (1, 'Ma'), (3, 'Averell'),
    #  (4, 'William'), (5, 'Joe')]

    print(f"priorité min = {daltons.prio_min}, priorité max = {daltons.prio_max}")  # 1, 5

    for elt in daltons:
        print(elt, end=", ")  # ((1, 'Jack'), (1, 'Ma'), (3, 'Averell'),
        #  (4, 'William'), (5, 'Joe'),
    print()

    for elt in daltons.items():
        print(elt, end=", ")  # ((1, 'Jack'), (1, 'Ma'), (3, 'Averell'),
        #  (4, 'William'), (5, 'Joe'),
    print()

    for val in daltons.vals():
        print(val, end=", ")  # Jack, Ma, Averell, William, Joe,
    print()

    print(len(daltons))  # 5

    print(daltons[0])  # (1, "Jack")

    val = daltons.pop()
    print(daltons)  # [(1, 'Jack'), (1, 'Ma'), (3, 'Averell'), (4, 'William')]
    print(val)  # (5, 'Joe')

    print(f"priorité min = {daltons.prio_min}, priorité max = {daltons.prio_max}")  # 1, 4

    outlaws = copy.deepcopy(daltons)
    del daltons[0]
    print(daltons)
    print(outlaws)

    outlaws.dump("outlaws.yaml")
    bandits = ListePriorite.load("outlaws.yaml")
    del outlaws[0]
    print(bandits)