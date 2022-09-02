a = 187
b = 7
div = a / b
print(f"O quociente de a por b é {div:.6f}")
resto = a % b
print(f"O resto da divisão de a por b é {resto}.")
int = a // b
while int > 5:
	b = b + 2
	int = a // b
	print(f"A parte inteira do quociente é {int}.")
