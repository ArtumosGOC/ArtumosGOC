nome = "João Felipe de Souza"
leg = len(nome)
for i in range(21):
	print(f"{nome[leg - i:leg+i]:>45}")
