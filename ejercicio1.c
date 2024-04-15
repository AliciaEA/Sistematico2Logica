/*calcular el cubo de un numero*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
int num, cubo;
printf("dime un numero: ");
scanf( "%i", &num);
cubo=pow(num,3);
printf("el cubo de %i es %i\n", num, cubo);

    return 0; 
}
