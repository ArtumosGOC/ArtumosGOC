nome = input('digite seu nome completo:\n')
print(nome[-5])
for a in range(len(nome)):
    print(f"[{nome[a::-1]}]")
