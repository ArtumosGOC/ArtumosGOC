import random

Num_random = random.randint(11,40)
chute,tentativas = 0,0

while chute != Num_random:
    chute = int(input("Difite um numero: "))
    if (chute > 40):
        chute = 40
        print("\033[31mNumero minimo é 40, seu numero foi definido como (MAXIMO)\033[0m")
    elif (chute < 11):
        chute = 11
        print("\033[31mNumero minimo é 11, seu numero foi definido como (MINIMO)\033[0m")
    else:
        if (chute > Num_random):
            print(f"\033[4mError, é menor, entre \033[0m")
            if (chute > Num_random - 10 or chute > Num_random - 2):
                print(f"errou de {chute - 2} a {chute - 10}")
        elif (chute < Num_random):
            print(f"\033[4mError,é maior, \033[0m")
            if (chute < Num_random - 10 or chute < Num_random - 2):
                print(f"errou de {chute + 2} a {chute + 10}")
    tentativas += 1

print(f"voce acertou, o numero é \033[31m{Num_random}\033[0m, tentou \033[31m{tentativas} \033[0mvezes")







