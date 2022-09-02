#Escolha de Objeto a ser processado
print('----\t(tipo de precificação)\t----\n')
print('\t1. Somente (Valor)')
print('\t2. Somente desconto (Valor & Porcentagem)\n')
print('Sua escolha:')
escolha = int(input())

#condições
#se escolha for = 1 execute
if(escolha == 1):

    #valor de entrada
    valor_n = int(input('Valor do Objeto?\n'))
    
    #valor a ser calculado
    #valor+15/100*valor= (valor/valor)+(15/100) forma fatorada
    valor_final = (valor_n*1.15)

    #valor final
    print(f'O valor final será de R${valor_final}')

#condições
#se escolha for = 2 execute
elif(escolha == 2):
    
    #entrada de dados
    valor_n = int(input('Valor do Objeto?\n'))
    valor_j = int(input('Valor do desconto em quantos(%) ?\n'))

    #calculo de dados
    valor_final =  (valor_n - (valor_n * (valor_j/100)))
    valor_desconto = (valor_n * (valor_j/100))

    #saida de dados
    print(f'O valor final do desconto será de R${valor_final}, tendo um desconto de R${valor_desconto}')

#outro
else:

    #saida de dados
    print('Opção não configurada')
