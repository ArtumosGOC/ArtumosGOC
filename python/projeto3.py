lista_de_numeros = range(101)
lista_par = []
lista_impar = []
for i in lista_de_numeros:
    if(lista_de_numeros[i]%2 == 0):
        lista_par.append(lista_de_numeros[i])
    else:
        lista_impar.append(lista_de_numeros[i])
print(f"{lista_impar}\n{lista_par}")

#exercicio5 -codaqui!