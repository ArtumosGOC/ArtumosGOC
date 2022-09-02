#
casa = 140
for c in range(31,37):
    casa = casa+24
    
casa = casa*3

#
dia_n = 3
dia_n = dia_n + 277
for t in range(19,23):
 
    dia_n = dia_n - 2 * t
    
#
a = 90
b = 2
qct = (a+b)//b
rst = (a-5*b)%b
soma = qct+rst

#
n = 33
for p in range(3,8):
    n=n+42
    if n > 150:
        n=n-80
        
#
n = n%7
print(casa, dia_n, soma, n)
