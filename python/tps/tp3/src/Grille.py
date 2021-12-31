class Grille:


    def __init__(self,nb_lig_max,nb_col_max):
        self.bateau_liste = []
        self.nb_lig_max = nb_lig_max
        self.nb_col_max = nb_col_max


    def ajouter_bateau(self, nom_bateau):
        self.bateau_liste.append(nom_bateau)

    def supprimer_bateau(self, nom_bateau):
        self.bateau_liste.pop(nom_bateau)


    def coup(self,lig, col):


    def __str__(self):
        return "[" + self.bateau_liste + "]"