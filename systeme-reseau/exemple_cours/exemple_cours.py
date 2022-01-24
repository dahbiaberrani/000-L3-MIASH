import os
for i in range(4):
   if os.fork() != 0:
       print(f"PID = {os.getpid()}, i = {i}")
