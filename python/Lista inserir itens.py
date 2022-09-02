import time

lista =[3,7,8,2,13,45,34,21]
s = 5
for n in range(99,104):
    timer.sleep(1)
    lista.append(n)
    print(lista)
print('Possui ',len(lista))
while s!= 0:
    n = int(input("Digite um número diferente de zero: "))
    lista.append(n)
    print(lista)
    s -= 1

print('-"*"-'*30)
print(len(lista),)
pos = int(input("Em qual posição você deseja inserir (num): "))
num = float(input("digitar um novo número para a lista: "))

lista.insert(pos,num)
print('Possui ', lista,'\n')

lista[4]= 29.2
print(f"substituindo o item 4 por 29.2 fica :{lista}")