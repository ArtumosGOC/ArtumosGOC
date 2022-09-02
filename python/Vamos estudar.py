import time
nome = 'coded by goc'
fraz = ("Vamos estudar, gente boa!")
k = 11
for k in range(13):
        time.sleep(0.1)
        print(f"\033[1;32m{fraz[12 - k:12 + k]:^45}\033[m")

for i in range(12,0,-1):
        print(f"\033[1;31m{fraz[12 - i:12 + i]:^45}\033[m")
v = 0
for arco in range(30, 48):

        if(v <= 11):
                print(f"\033[1;{arco}m{nome[v]:^45}")
                v +=1