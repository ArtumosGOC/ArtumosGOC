lista_1 = []
for n in range(3):
    nome = input("digite seu nome: ")
    lista_1.append(nome)
print(lista_1)

print("agora vamos ao while")
print("voce digita quantos nomes quiser")
lista_2 = []
r = 'S'
while r=='S':
    nome = input("digite um nome: ")
    nome = nome.title()
    lista_2.append(nome)
    r = input('continuar?(S/N)').upper()

print(f"Sua lista ficou assim {lista_2}")