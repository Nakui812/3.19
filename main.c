#include <stdio.h>

int main() {
    int lato1, lato2, lato3;

    printf("Inserisci i valori dei tre lati del triangolo:\n");
    scanf("%d %d %d", &lato1, &lato2, &lato3);

    if (lato1 == lato2 && lato2 == lato3) {
        printf("Il triangolo è equilatero\n");
    } else if (lato1 == lato2 || lato2 == lato3 || lato1 == lato3) {
        printf("Il triangolo è isoscele\n");
    } else {
        printf("Il triangolo è scaleno\n");
    }

    return 0;
}
