#include <stdio.h>

int main() {
    int n;

    printf("Ingresa un numero: ");
    scanf("%d", &n);

    if(n == 15) {
        printf("\n\nValor introducido es quince.\n\n");
    }
    else
        printf("\n\nResultado al cubo es: %d\n\n", n*n*n);

    return 0;
}