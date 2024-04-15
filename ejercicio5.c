/*Leer el precio de un producto y otorgar el 15% de descuento, mostrar el precio original, el descuento y el nuevo precio*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float precio, descuento, precioFinal;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    
    descuento = precio * 0.15;
    precioFinal = precio - descuento;
    
    printf( "El precio oiginal era de: %.2f\n", precio);
    printf( "El descuento es de: %.2f\n", descuento);
    printf( "El precio con el descuento incluido es de: %.2f\n", precioFinal);


    return 0;
}
