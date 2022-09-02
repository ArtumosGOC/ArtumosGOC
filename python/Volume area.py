print('-------\t\tEscolha\t\t------\n')
print('-1. Cubo')
print('-2. Paralelepipedo\n')
print('------------------------------')

tipo = str(input('Sua escolha:'))

if(tipo == "1"):

    a = int(input('A '))

    volume = a**3
    area = 6*a**2
    print(f"Area é de {area}M² e o volume é de {volume}L")

elif(tipo == "2"):

    a = int(input('A '))
    b = int(input('B '))
    c = int(input('C '))

    volume = c * b * a
    area = 2 * (a ** 2 + b ** 2 + c ** 2)
    print(f"Area é de {area}M² e o volume é de {volume}L")

else:
    print("Opção não Programada!")


