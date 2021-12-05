from Gestionnaire_Reseau import Gestionnaire_reseau
from Noeud import Noeud
from PosteDeTravail import PosteDeTravail
from Imprimante import Imprimante

if __name__ == "__main__":
    gest_reseau = Gestionnaire_reseau()

    pc1 = PosteDeTravail("192.168.1.1")
    pc2 = PosteDeTravail("192.168.1.2")
    impr3 = Imprimante("192.168.1.3")
    pc4 = PosteDeTravail("192.168.1.4")
    impr5 = Imprimante("192.168.1.5")
    pc6 = PosteDeTravail("192.168.1.6")

    gest_reseau.connecter(pc1, pc2)
    gest_reseau.connecter(pc2, impr3)
    gest_reseau.connecter(impr3, pc4)
    gest_reseau.connecter(pc4, impr5)
    gest_reseau.connecter(impr5, pc6)
    gest_reseau.connecter(pc6, pc1)

    gest_reseau.add_noeud(pc1)
    gest_reseau.add_noeud(pc2)
    gest_reseau.add_noeud(impr3)
    gest_reseau.add_noeud(pc4)
    gest_reseau.add_noeud(impr5)
    gest_reseau.add_noeud(pc6)

    pc1.creer_paquet(1, "Le paquet n°1 blabla", pc6.get_adresse())
    pc4.creer_paquet(2, "Le paquet n°2 blibli A IMPRIMER", impr5.get_adresse())
    pc6.creer_paquet(3, "Le paquet n°3 bloblo", pc2.get_adresse())
    pc6.creer_paquet(4, "Le paquet n°4 bleble A IMPRIMER", impr3.get_adresse())
    
    gest_reseau.deconnecter(pc2)
    pc1.creer_paquet(1, "Le paquet n°1 blabla", pc6.get_adresse())

