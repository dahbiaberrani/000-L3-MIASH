# def get_max(liste):
#     tmp_max = liste[0]
#     for x in liste:
#         if x > tmp_max:
#             tmp_max = x
#     return tmp_max
import bisect


class ListePriority:

    def __init__(self):
        self.prio_min = None
        self.prio_max = None
        self.content = []
        self.length = len(self.content) - 1

    def empty(self):
        return self.length == 0

    def add(self, priority, objet):
        couple = (priority, objet)
        bisect.insort(self.content, couple)

        self.content.append(couple)
        if self.prio_min is not None and self.prio_max is not None:
            if self.prio_max < priority:
                self.prio_max = priority
            if self.prio_min > priority:
                self.prio_min = priority
        else:
            self.prio_max = priority
            self.prio_min = priority

    def priorities_of(self, objet):
        row = []
        for x in self.content:
            if x[1] == objet:
                row.append(x[0])
        return row

    #
    # def recherche_prio_max(self):
    #     tmp = []
    #     for x in self.content:
    #         tmp.append(x[0])
    #     return get_max(tmp)

    def pop(self):
        tmp = self.content[len(self.content) - 1]
        self.content.remove(tmp)
        self.prio_max = self.content[len(self.content) - 1][0]

    def contains(self, objet):
        return objet in [x[1] for x in self.content]

    def items(self):
        """renvoie toute les associations objet,ordre de la liste"""

        res = []
        for i in range(self.lenght):
            res.append(self.contenu[i])
        return res

    def vals(self):
        """renvoie le contenu de la liste, sans leurs ordres"""

        res = [self.contenu[j][1] for j in range(self.lenght)]
        return res

    def at(self, num):
        if num >= 0 and num <= self.lenght - 1:
            return "(" + str(self.contenu[num][0]) + "," + self.contenu[num][1] + ")"

    def delete(self, priority):
        tmp = self.content[priority]
        self.content.remove(tmp)
        self.prio_min = self.content[0][0]

    def __str__(self):
        return f" ListePriority {self.content}"



if __name__ == '__main__':
    daltons = ListePriority()
    print(daltons.empty)
    print(f"priorité min = {daltons.prio_min}, priorité max = {daltons.prio_max}")  # None, None

    daltons.add(5, "Joe")
    daltons.add(1, "Jack")
    daltons.add(3, "Averell")
    daltons.add(4, "William")
    daltons.add(1, "Ma")
    daltons.add(10, "Jack")
    daltons.add(10, "Boo")

    print(daltons.contains("Lucky Luke"))  # False
    # print("Averell" in daltons)  # True

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
    bandits = ListePriority.load("outlaws.yaml")
    del outlaws[0]
    print(bandits)