email = []
conf_email = []
senha = []
confi_senha = []

def cadastros(EMAIL,CONFI_EMAIL,SENHA,CONFI_SENHA):

    boleano = True
    while (boleano):

        if(EMAIL == CONFI_EMAIL):
            if(SENHA == CONFI_SENHA):
                email.append(EMAIL.upper())
                conf_email.append(CONFI_EMAIL.upper())

                senha.append(SENHA)
                confi_senha.append(CONFI_SENHA)
                print("Cadastrado")


            boleano = False
        else:
            print("Verifique seu email")
            break

    return "\n"
print()