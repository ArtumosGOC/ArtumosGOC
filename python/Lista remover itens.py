lista = [23,'paulo',44,56.8,'joaquim','claudia',34.7]
print(lista)
lista.pop()
print(f'Usamos o pop(), ficou:{lista}')
lista.pop(2)
print(f"usamos pop(2), a lista ficou assim: {lista}")
lista.remove("paulo")
lista.pop()
print(f"comando remove com paulo, veja\033[33m: {lista}")