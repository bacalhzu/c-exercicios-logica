#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================FATORIAL RECURSIVO=================\n");
    printf("Digite um número: ");

    int n;
    scanf("%d", &n);

    printf("\n%d! = %d", n, fatorial(n));
    return 0;
}

int fatorial(int n) {

    if (n == 0)
        return 1;

    return n * fatorial(n - 1);
}

/* Como funciona dado o número "5", na prática.

    5 * wait                          24 = 120
    4 * wait                   6 = 24 ^
    3 * wait             2 = 6 ^
    2 * wait       1 = 2 ^
    1 * wait 1 = 1 ^
    0 = 1    ^
    
*/