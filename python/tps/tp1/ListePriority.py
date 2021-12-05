# def get_max(liste):
#     tmp_max = liste[0]
#     for x in liste:
#         if x > tmp_max:
#             tmp_max = x
#     return tmp_max

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
        self.content.append(couple)
        self.length += 1
        self.content.sort()
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

    # def item(self):
    #     tmp =()
    #     for x in self.content:
    #         tmp.append(x)
    #     return tmp

    def at(self, priority):
        return self.content[priority]

    def delete(self, priority):
        tmp = self.content[priority]
        self.content.remove(tmp)
        self.prio_min = self.content[0][0]

    def __str__(self):
        return f" ListePriority {self.content}"
