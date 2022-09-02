import random
lista = []
for i in range(50):
    r = random.randint(-12, 15)
    if(r not in lista):
        lista.append(r)
lista.sort()
print(lista)
print(len(lista))