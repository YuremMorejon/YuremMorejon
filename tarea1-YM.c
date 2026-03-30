#include <stdio.h>

int main() {
    int inicio, fin, incremento;
    
    printf("Ingrese un número inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese un número final: ");
    scanf("%d", &fin);

    printf("Ingrese un valor de incremento: ");
    scanf("%d", &incremento);

    printf("Resultado: ");

    for (int i = inicio; i <= fin ; i+= incremento) {
        printf("%d ", i);
    }

return 0;
}