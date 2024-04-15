/*Leer un numero e imprimir el cuadrado del antecesor*/
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{ 
    int num, antecesor, cuadrado;
    printf("Dime un numero: ");
    scanf("%d", &num);
    antecesor = num - 1;
    cuadrado = pow(antecesor,2);
    printf("El cuadro del antecesor de %d es de %d\n:",num, cuadrado);
    return 0;
}