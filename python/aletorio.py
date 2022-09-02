import random
conta = [*range(6)]
for n in range(6000):
    dado = int(random.randint(1,6))
    #match dado:
        #case n:
            #conta[n] +=1
            #continue
    conta[dado-1] = conta[dado-1] + 1
print(conta)
#conta[0] = "NULL"
#for m in range(6000):
    #print(f"valor {m}° = {conta[m]}\n")