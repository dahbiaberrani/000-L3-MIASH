
class Gestionnaire_reseau():
    def __init__(self):
        print("Creation de Gestionnaire_reseau")
        self.noeuds = []
    
    def connecter(self, noeud1, noeud2):
        print("Connection de noeud1 et noeud2...")
        noeud1.set_noeud_suivant(noeud2)

    def deconnecter(self, noeud):
        print("Déconnection de noeud")
        for elem_noeud in self.noeuds:
            if elem_noeud.get_noeud_suivant() == noeud:
                print(f'Deconnection de {noeud}, le noeud_suivant de {elem_noeud.get_adresse()} devient {noeud.get_noeud_suivant().get_adresse()}')
                elem_noeud.set_noeud_suivant(noeud.get_noeud_suivant())
                break

        noeud.set_noeud_suivant(None)

    def add_noeud(self, noeud):
        self.noeuds.append(noeud)

    