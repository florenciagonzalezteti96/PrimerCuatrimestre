#include <stdio.h>
#include <stdlib.h>

int main()//NO SE CAMBIA EL NOMBRE DE LA FUNCION
{
    char texto; //LEE UN SOLO CARACTER PORQUE EL TIPO DE VARIABLE ES CHAR.
    char palabra [16]; //siempre hay que declarar un byte mas de lo que se necesita usar. ESTO FUNCIONA COMO UN MAXIMO DE CARACTERES A INGRESAR.

    printf("Ingrese un texto: ");
    scanf ("%s", palabra); //EL ARRAY, LAS CADENAS DE PALABRAS NO NECESITAN EL & PARA MOSTRAR LA DIRECCION.
    printf ("La palabra ingresada es %s", palabra); //INCLUSO SI INGRESO UN NUMERO, ESE NUMERO ES UN CARACTER MAS.

    return 0;
}
