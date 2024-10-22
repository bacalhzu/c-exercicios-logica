#include <stdio.h>
#include <stdlib.h>

void mostrarFibonacci(int, int, int);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================FIBONACCI RECURSIVO=================\n");
    printf("Digite a quantidade de termos da sequência: ");

    int n;
    scanf("%d", &n);

    mostrarFibonacci(n, 0, 1);
    return 0;
}

void mostrarFibonacci(int n, int primeiroTermo, int segundoTermo) {

    int termosRestantes = n - 1;
    
    if (termosRestantes < 0)
        return;
    
    printf("%d ", primeiroTermo);
    mostrarFibonacci(termosRestantes, segundoTermo, primeiroTermo + segundoTermo);
}