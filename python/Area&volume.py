#Escolha de Objeto a ser processado
print('----\t(Tipo de forma geométrica)\t----\n')
print('\t1. Para Cubo')
print('\t2. Para Retangulo\n')
print('Sua escolha:')
forma = int(input(''))

#condições
#se forma for = 1 execute
if(forma == 1):

    #entrada de dados.
    a = int(input('Valor de uma das aresta:\n'))

    #trabalho feito com os dados
    #2.a.c+2.c.b+2.a.b = 2.(a.c+c.b+a.b) = 2.(a²+b²+c²) area
    #a.b.c = a³ volume
    area = 6*(a*a)
    volume =(a**3)

    #saida dos dados
    print(f'Conversão concluida\nSua area é de {area}M² e seu volume é de {volume}L')

#outro se forma for = 2
elif(forma == 2):
    
    #entrada de dados.
    a = int(input('Qual é a largura:\n'))
    b = int(input('Qual é a altura\n'))
    c = int(input('Qual é o comprimento\n'))

    #trabalho feito com os dados
    #2.a.c+2.c.b+2.a.b = 2.(a.c+c.b+a.b) = 2.(a²+b²+c²) area
    #a.b.c = a.b.c volume
    area = 2*(a**2+b**2+c**2)
    volume = a*b*c

    #saida dos dados
    print(f'Conversão concluida\nSua area é de {area}M² e seu volume é de {volume}L')

#outro
else:

    #saida de dados
    print('Opção não inserida.')

    

