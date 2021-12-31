import pickle


class Mediatheque:
    """Une médiathèque est une collection de documents """

    def __init__(self):
        self.auteur = None
        self.titre = None
        self.__documents = []

    def __str__(self):

        res = self.titre + "," + self.auteur
        return res

    def documents(self):
        """accesseur de l'atribut document"""
        return self.__documents

    # def documents(self, doc, new):
    #     """modifier un document"""
    #     self.__documents[self.__documents.index(doc.id)] = new

    def modifer(self, doc, new):
        """modifier un document"""
        self.__documents[self.__documents.index(doc.id)] = new
        self.sauve()

    def ajouter(self, doc):
        """ajouter un document"""
        if (doc.id not in documents()):   #rajouter le document que s'il n'existe pas déjà dans la médiathèque
            documents().append(doc.id)
        self.sauve()

    def supprimer(self, doc):
        """supprimer un document"""
        if (doc.id in documents()):
            del documents()[documents().index(doc.id)]
        self.sauve()

    # def modifier(self, doc, new):
    #     """modifier un document"""
    #     if (doc.id in documents()):
    #         documents(doc, new)


    def each(self):
        """énumérer tous les documents de la médiathèque"""
        iter = (x for x in documents())
        for i in iter:
            print(i)

    def each_livre(self):
        """énumère tous les livres"""
        iter = (x for x in documents())
        for i in iter:
            if (isinstance(i, Livre)):
                print(i)

    def each_article(self):
        """énumère tous les articles"""
        iter = (x for x in documents())
        for i in iter:
            if (isinstance(i, Article)):
                print(i)


    def affiche_titre(self):
        """affiche dans l’ordre alphabétique par rapport aux titres les documents."""
        titles = []
        for doc in documents():
            titles.append(doc.titre)
        print(titles.sort())


    def affiche_auteur(self):
        """affiche dans l’ordre alphabétique par rapport aux auteurs les documents."""
        titles = []
        for doc in documents():
            titles.append(doc.auteur)
        print(titles.sort())

    def sauve(self):
        """sauvegarder la médiathèque."""
        f = open('mediatheque.dat', 'w')
        pickle.dump(self, f)
        f.close()

    def restaure(self):
        """restaurer la médiathèque."""
        f = open('mediatheque.dat', 'r')
        pickle.load(f)
        f.close()