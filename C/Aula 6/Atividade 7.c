#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main() {

    int c_secreta = 3;
    int L = 26,T=50;
    int i = 0;
    char t_final[T],t_inicial[50];
    printf("Digite o codigo a criptografar em maiusculo:");
    scanf("%[^\n]",t_inicial);

    int l = strnlen(t_inicial, 50);

    for (i = 0; i < l; i++) {
        t_final[i] = toupper(t_inicial[i]);
    }

    for (i = 0; i < l; i++) {
        t_final[i] = 'A' + (t_final[i] - 'A' + c_secreta) % L;
    }

    for (i = 0; i < l; i++) {
        printf("%c", t_final[i]);
    }
}