n = int(input('numero entre 23 a 41: '))
for k in range(12,18):
    n = n+55
    if n > 280:
        n = n-100
n = n//5
print(n)
