n = [34,37,'Pedro','Arthur',27,'André',39,'Cesar']
if('silvio' in n):
    print("Achei o nome")
else:
    print("não achei")
num = float(input("digite um numero: "))
if(num not in n):
    n.append(num)
    print("inserido, confira abaixo, no final da lista")
else:
    print(f"O numero {num} já existe na lista veja abaixo")
    print(n)