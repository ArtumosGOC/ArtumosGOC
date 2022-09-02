nome = str(input("Digite seu nome: "))
print(f"Numeros de caracteres no seu nome:{len(nome.strip().title())} ")
num = int(input("digite um numero menor que os caracteres do seu nome: "))
for a in range(num):
        b = (a+1)
        print(nome[:b])
