import bisect

class ListePriorite:
    """Liste ordonnées par des tuples d'association ordre/objet"""
    
    def __init__(self):
        """Les attributs sont la liste de tuples (initialement vide) et la longueur de la liste"""
        
        self.contenu = []
        self.lenght = len(self.contenu)

    def __str__(self):
        """redefinition de toString"""
        
        res = "["
        for i in range(self.lenght):
            res += "({},{})".format(self.contenu[i][0],self.contenu[i][1])
        res += "]"
        
        return res

    def empty(self):
        """Renvoie "True" si la liste est vide"""
        
        if self.lenght == 0:
            return True
        else:
            return False
        
    def add(self, priorite, objet):
        """Ajoute un tuple à la liste, le place au bon endroit"""
        
        elt = (priorite,objet)
        bisect.insort(self.contenu,elt)
        
        self.lenght += 1

    def items(self):
        """renvoie toute les associations objet,ordre de la liste"""
        
        res = []
        for i in range (self.lenght):
            res.append(self.contenu[i])
        return res

    def vals(self):
        """renvoie le contenu de la liste, sans leurs ordres"""
        
        res = [self.contenu[j][1] for j in range(self.lenght)]
        return res

    def contains(self, objet):
        """Verifie si un élement se trouve dans la liste"""
        
        vals = self.vals()
        return objet in vals
    
    def priorities_of(self, name):
        """Renvoie l'ordre ou les ordres de priotité de l'objet en paramètre"""
        
        res = "["
        trigger = False
        for i in range (self.lenght):
            if self.contenu[i][1] == name:
                if trigger == True:
                    res += ","
                res += str(self.contenu[i][0])
                trigger = True
        res += "]"
        return res
    
    def pop(self):
        """supprime le dernier élement de la liste et le renvoie"""
        
        res = str(self.contenu[self.lenght-1][0]) + ", " + self.contenu[self.lenght-1][1]
        temp = ListePriorite()
        self.lenght -= 1
        for i in range(self.lenght):
            temp.add(self.contenu[i][0], self.contenu[i][1])
        self.contenu = temp.contenu
        
        return res
    
    def prio_min(self):
        """renvoie la plus faible priorité de la liste"""
        
        return self.contenu[0][0]
        
    def prio_max(self):
        """renvoie la plus forte priorité de la liste"""
        
        return self.contenu[self.lenght-1][0]
    
    def at(self, num):
        if num >= 0 and num <= self.lenght-1:
            return "(" + str(self.contenu[num][0]) + "," + self.contenu[num][1] + ")"
        
    def delete(self, prio):
        if prio >= 0 and prio <= self.lenght-1:
            temp = ListePriorite()
            for i in range(self.lenght):
                if i != prio:
                    temp.add(self.contenu[i][0], self.contenu[i][1])
            self.lenght -= 1
            self.contenu = temp.contenu

  
    def __iadd__(self, other):
       
        self.add(other[0], other[1])
        return self