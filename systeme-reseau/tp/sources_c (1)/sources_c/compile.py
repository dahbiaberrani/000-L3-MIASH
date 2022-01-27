from __future__ import print_function
from fileinput import filename
import os, sys,os.path
def change_extention(filename):
    (prefix, _, _) = filename.rpartition('.')
    return prefix + ".o"
# liste_path = /t
liste_erreurs = []
def create_link_command_param_list(source_file_list):
    # ['compile.py', 'titi.c', 'tutu.c', 'toto.c', 'tata.c', 'monprog']
    # ['tutu.o', 'titi.o', 'tata.o', 'toto.o', '-o', 'monprog']
    list_link = ["c99"]
    for i in range(1, len(source_file_list)-1):
        list_link.append(change_extention(source_file_list[i]))
    list_link.append("-o")
    list_link.append(source_file_list[len(source_file_list)-1])
    return list_link 

def check_syntaxe(nomfic):
    if not os.path.isfile(nomfic):
        print(f"{nomfic} c'est pas un ficher")
        exec(3)
    if not nomfic.endswith(".c"):
        print(f"{nomfic} c'est pas un fichier c")
        exec(2)
# if len(sys.argv) != 2:
#     print(f"Usage:{sys.argv[0]} fichier.c",file=sys.stderr)
#     exec(1)

check_syntaxe(sys.argv[1])

# compilation de tous les fichiers .c
for  i in range(1, len(sys.argv)-1):
    if os.fork() == 0:
        fich = os.open("/tmp/erreurs", os.O_CREAT | os.O_WRONLY | os.O_TRUNC)
        os.dup2(fich,2)
        os.execlp("c99","c99", "-c",sys.argv[i])
    (pid, status) = os.wait()
# Vérifier que y ' a pas d'erreur
#TODO gérer les erreur dans chaque fichier

    if status != 0 :
        if os.fork() == 0:
            os.execlp("more", "more","/tmp/erreurs")
        os.wait()
        # os.remove("/tmp/erreurs")
        os.execlp("nano", "nano", sys.argv[i])


#Edition des liens
link_param_list = create_link_command_param_list(sys.argv)
if os.fork() == 0: 
    os.execvp("c99", link_param_list)

os.wait()
os.execlp("./" + sys.argv[len(sys.argv)-1], sys.argv[len(sys.argv)-1])
