import Contas

boleano_ = True
while(boleano_):
    Contas.cadastros(input('Digite seu Email: '),input('Confirme seu Email: '),input('Digite sea Senha: '),input('Confirme sua Senha: '))
    if(len(Contas.email) > 0):
        print(f"\033[1mEmails registrados:\033[m{len(Contas.email)}\n\033[1mSenhas registradas:\033[m{len(Contas.senha)}")
    else:
        print("não a nada registrado")

    resposta = input("quer parar?: ")
    if(resposta.upper() == "S" or resposta.upper() == "SIM"):
        boleano_ = False
