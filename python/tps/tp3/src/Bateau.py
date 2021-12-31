from abc import ABC, abstractmethod


class Bateau(ABC):

    @abstractmethod
    def bateau(self, nom, nb_element):
        self.nom = nom
        self.nb_element = nb_element,

    def