sn = 's'
while (sn.upper() == 'S'):
	divs = []
	num = int(input("numero a ser digitado: "))
	quo = num
	for d in range(2, num//2+1):
		while ((quo % d) == 0):#12
			divs.append(d)#2
			quo = quo / d
	#divs.append(int(quo))
	#if(quo == 1):
		#divs.remove(1)
	if(len(divs)>0):
		print(divs)
	else:
		print(f"{num} é primo")
	sn = input("mais? s/n: ")
	print("até logo, tenha um bom dia")