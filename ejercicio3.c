#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nombre[100];

    printf("introduce tu nombre");
    scanf(" %[^\n]", nombre);

   printf("Hola %s.\n", nombre);
    return 0;
}
