#include <stdio.h>
#include <stdlib.h>

void sort(int*, size_t);

int main() {

    /*================================================*/
    //habilita caracteres acentuados (codificação UTF-8)
    system("chcp 65001");
    system("cls");
    /*================================================*/

    printf("=================LISTA ORDENADA=================\n");
    printf("Digite 5 números (separados por espaço): ");

    int list[5];
    for (int i = 0; i < 5; i++) 
        scanf("%d", &list[i]);

    printf("\nLista lida: [");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", list[i]);
    }
    printf("\b\b]");

    sort(list, 5);

    printf("\nLista ordenada: [");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", list[i]);
    }
    printf("\b\b]");
    return 0;
}

void sort(int * list, size_t size) {

    for (size_t i = 0; i < size; i++) {
        for (size_t j = i + 1; j < size; j++) {
            if (list[j] < list[i]) {
                int swap = list[i];
                list[i] = list[j];
                list[j] = swap;
            }
        }
    }
}
