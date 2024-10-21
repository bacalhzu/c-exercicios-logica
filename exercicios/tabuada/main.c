#include <stdio.h>
#include <stdlib.h>

void mostrarTabuada(int);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================TABUADA=================\n");
    printf("Digite um número: ");

    int n;
    scanf("%d", &n);

    mostrarTabuada(n);
    return 0;
}

void mostrarTabuada(int n) {
    for (int i = 0; i <= 10; i++) 
        printf("\n%d x %d = %d", n, i, n * i);
}

/* Como funciona dado o número "5", na prática.

    5 * wait                          24 = 120
    4 * wait                   6 = 24 ^
    3 * wait             2 = 6 ^
    2 * wait       1 = 2 ^
    1 * wait 1 = 1 ^
    0 = 1    ^
    
*/