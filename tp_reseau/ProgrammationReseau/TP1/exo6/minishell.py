import os
import sys



while True:
    try:
        inp = input("$ ")

    except EOFError:
        print("Bye")
        sys.exit(0)

    if os.execlp(inp,inp):
        print("SU")
    else:
        print("FA")
