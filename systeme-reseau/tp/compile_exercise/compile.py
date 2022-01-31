from __future__ import print_function
from fileinput import filename
import os, sys,os.path
def change_extention(filename):
    (prefix, _, _) = filename.rpartition('.')
    return prefix + ".o"


def create_link_command_param_list(source_file_list):
    list_link = ["c99"]
    for i in range(1, len(source_file_list)-1):
        list_link.append(change_extention(source_file_list[i]))
    list_link.append("-o")
    list_link.append(source_file_list[len(source_file_list)-1])
    return list_link 



def check_syntaxe(fics):
    for fic in fics:
        if not fic.endswith(".c"):
            print(f"{fic} c'est pas un fichier c")
            exec(2)

if len(sys.argv) < 3:
    print(f"Usage:{sys.argv[0]} fichier.c",file=sys.stderr)
    exec(1)

programme = sys.argv.pop()
liste_sources = sys.argv[1:]

check_syntaxe(liste_sources)

# compilation de tous les fichiers .c
for  fic in liste_sources:
    if os.fork() == 0:
        fich_err = os.open(fic.replace(".c", ".err"), os.O_CREAT | os.O_WRONLY | os.O_TRUNC)
        os.dup2(fich_err,2)
        os.execlp("c99","c99", "-c",fic)

linker = True
for fic in liste_sources:
    (pid, status) = os.wait()
    if status != 0 :
        linker = False


sys.argv.append(programme)

if linker:
    #suppresion des fichier .err
    for fic in liste_sources:
        os.unlink(fic.replace(".c",".err"))
    #Edition des liens
    link_param_list = create_link_command_param_list(sys.argv)
    if os.fork() == 0: 
        os.execvp("c99", link_param_list)
    os.wait()
    for fic in liste_sources:
        os.unlink(fic.replace(".c",".o"))
    os.execlp("./" + sys.argv[len(sys.argv)-1], sys.argv[len(sys.argv)-1])
else:
    print("Erreur de comiplation: consultez les fichers .err")
