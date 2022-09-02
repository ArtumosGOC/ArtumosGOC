num = int(input("Digite um número, vou mostrar sua tabuada:"))
print("NÚMERO FATOR RESULTADO")
for m in range(11):
	t = num * m
	print(f"{num:^6}x{m:^7}={t:>5}")