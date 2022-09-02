nomes = ["Ana Maria", "Fernando Alves", "Sérgio Cardoso", "Francisco Lima", "Suzana Lima"]
salarios = [ ]
for nome in nomes:
    salario_v = str(input("valor dos salarios: "))
    salario_v = salario_v.replace(",",".")
    salario_v = float(salario_v)
    salarios.append(salario_v)
    
print("\n")
for k in range(len(nomes)):
    print(f"\033[1;00mNome:\033[1;31m {nomes[k]}\033[1;00m - Salario: \033[1;31m{salarios[k]:.2f}")
