/*Leer dos numeros, mostrar el primer número elevado a 
la 4 potencia y el segundo número elevado al cuadrado.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    //Variables
    int primerNumero, segunNumero, cuartapow, cuadrado;

    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &primerNumero);
    cuartapow = pow(primerNumero, 4);

    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &segunNumero);
    cuadrado = pow(segunNumero, 2);

    printf("El numero %i, elevado a la cuarta(4) potencia es %i\n", primerNumero, cuartapow);
    printf("El numero %i, elevado al cuadrado es %i", segunNumero, cuadrado);
    return 0;
}
