import os 
comiplation_status = os.system('cc toto.c  titi.c tata.c tutu.c -o main')
print("status = ",comiplation_status)
if comiplation_status == 0:
    os.system('./main')
else:
    os.system('nano tutu.c')