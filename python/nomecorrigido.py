nome=str(input("\033[1;33mdigite seu nome completo, todo maiusculo e com espaços antes e depois: \033[00m"))
print(f'\033[21;40m{len(nome)}')
print(nome.title())
print(nome.strip())
print(nome)
print(12*" ")
print(12*"-")
print(nome)
nome = nome.title().strip()
print(f"\033[0;40mNome corrigido = {nome}")