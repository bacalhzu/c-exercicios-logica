#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================FATORIAL=================\n");
    printf("Digite um número: ");

    int n;
    scanf("%d", &n);

    printf("\n%d! = %d", n, fatorial(n));
    return 0;
}

int fatorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}