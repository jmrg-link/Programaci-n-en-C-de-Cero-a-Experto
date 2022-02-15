// header - librerias importadas
#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

#define PI 3.1416


/*
 * clase 1
int main(){ // funcion principal
    // printf imprime en consola lo que tenga dentro de la funcion entre comillas
    printf("hola mundo\n");//\n retorno de carro {enter}
    printf("hola mundo");
    return 0;
}
 */

/*
 * clase 2: directivas de preprocesadores y variables
 *
 * */

int y = 5; // variable global

int main(){
    int x = 10;// variable local solo se accede en la funcion

    int Suma;
    Suma = 0;
    Suma = PI + x;

    printf("la suma es: %i",Suma);

    return 0;
}