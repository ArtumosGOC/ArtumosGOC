#1
casa = int(input("O numero da casa é:\n"))
for c in range(31,37):
    casa = casa+24

casa = 3*casa
print("1# Resultado: "+str(casa)+"\n-----\n")

#2
dia_n = int(input("Digite o dia em que voce nasceu:\n"))
dia_n = dia_n+277
for t in range(19,23):
    dia_n = dia_n - 2 *t
print("\n2# Resultado: "+str(dia_n)+"\n-----\n")
#3
a = int(input("Um numero inteiro de 90 e 140:\n"))
b = int(input("Outro inteiro, entre 2 e 9:\n"))
qct = (a+b)//b
rst = (a-5*b)%b
soma=(qct+rst)
print("\n3# Resultado: "+str(soma)+"\n-----\n")
#4
N = int(input("Numero entre 11 e 33:\n"))
N = N + 42
for p in range(3,8):
    N = N + 42
    if(N>150):
        N= N-80
N = N%7
print("\n4# Resultado: "+str(N)+"\n-----\n")
