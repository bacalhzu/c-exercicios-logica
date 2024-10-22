#include <stdio.h>
#include <stdlib.h>

void mostrarFibonacci(int);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================FIBONACCI=================\n");
    printf("Digite a quantidade de termos da sequência: ");

    int n;
    scanf("%d", &n);

    mostrarFibonacci(n);
    return 0;
}

void mostrarFibonacci(int n) {
    int anterior = 0;
    int atual = 1;
    int proximo;

    for (int i = 0; i < n; i++) {
        printf("%d ", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
}