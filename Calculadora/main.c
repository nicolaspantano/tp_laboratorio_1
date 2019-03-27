#include <stdio.h>
#include <stdlib.h>
#include "Funciones Matematicas.h"

int main(){

int opcion;
char seguir='s';
int numeroA;
int numeroB;
int suma;
int resta;
float division;
int producto;
int factorialA;
int factorialB;

    do
    {
        printf("Elija una opcion\n1.Ingresar 1er operando (A=X)\n2.Ingrese 2do operando (B=Y)\n3. Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n");
        opcion=pedirEntero("Ingrese una opcion: ");
            switch(opcion)
                {
                case 1: numeroA=pedirEntero("Ingrese el 1er operando: ");
                        break;
                case 2:
                        numeroB=pedirEntero("Ingrese el 2do operando: ");
                        break;
                case 3:
                        printf("Calculando...\n");
                        suma=sumarNumeros(numeroA,numeroB);
                        resta=restarNumeros(numeroA,numeroB);
                        division=dividirNumeros(numeroA,numeroB);
                        producto=multiplicarNumeros(numeroA,numeroB);
                        factorialA=factorial(numeroA);
                        factorialB=factorial(numeroB);
                        break;
                case 4:
                        printf("La suma es: %d\n",suma);
                        printf("La resta es: %d\n",resta);
                        printf("La division es: %.2f\n",division);
                        printf("El producto es: %d\n",producto);
                        printf("El factorial de A es: %d\n",factorialA);
                        printf("El factorial de B es: %d\n",factorialB);
                        break;
                case 5:
                        printf("Saliendo...\n");
                        break;

                default:
                        printf("No ingreso una opcion correcta\n");
                        break;

                }
    system("pause");
    system("cls");


    }while(seguir=='s');




    return 0;
}
