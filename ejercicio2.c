/*escribir un programa que dado el año de nacimiento y año actual.
calcule la edad ede una persona.
escriba una funcion que calcule la edad 
*/

#include <stdio.h>

int main(){
    int an;
    int aa = 2025;
    int edad;


    printf("ingresa tu año de nacimiento");
    scanf("%d", &an);

    edad= aa - an;

    printf("%d", edad);
    return edad; 
   
}