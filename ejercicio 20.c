//20.	Dada una cantidad entera de segundos (menor a 86400) y conviértela en horas, minutos y segundo utilizando los operadores de cociente y resto enteros. 
#include <stdio.h>

int main ()
{
    int segundostotales;
    int minutos;
    int horas;
    int segundos;
    printf("ingrese una cantidad de segundos menor a 86400\n");
    do
    {
        scanf("%d", &segundostotales);
        if (segundostotales>=86400)
            printf("el numero debe ser menor a 86400\n");
        if (segundostotales<0)
            printf ("el numero debe ser positivo\n");
    } while ((segundostotales>=86400) || (segundostotales<0));

    horas = segundostotales/3600;
    minutos = (segundostotales - horas*3600)/60;
    segundos = segundostotales - horas*3600 - minutos*60;
    
    printf("son %d:%d:%d", horas, minutos, segundos);
}
