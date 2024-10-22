#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalize(char *);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================CAPITALIZAR TEXTO=================\n");
    printf("Digite uma palavra ou texto: ");

    char text[255];
    fgets(text, sizeof(text), stdin);

    capitalize(text);

    printf("%s", text);
    return 0;
}

void capitalize(char * str) {
    str[0] = (str[0] >= 97 && str[0] <= 122) //ascii table range (a - z)
        ? str[0] - 32 
        : str[0];
}
