import random
r = 0
for n in range(600):
    dado = random.randint(1,6)
    if(dado == 2):
        r+= 1
print(f'O numero 2 saiu \033[4m{r}\033[m vezes')