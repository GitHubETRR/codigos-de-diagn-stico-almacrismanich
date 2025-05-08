#include <stdio.h>

//32.	Desarrollar un algoritmo que ingrese un numero por teclado y luego indique si es par o impar

int main()
{
    int numero;
    printf("ingresa un numero entero\n");
    scanf("%d", &numero);
    if (numero % 2 == 0)
        printf("%d es un numero par", numero);
    else
        printf("%d es un numero impar", numero);
    return 0;
}
