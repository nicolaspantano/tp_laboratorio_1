#include <stdio.h>
#include <stdlib.h>
#include "Funciones Matematicas.h"
#include "Funcion pedir numero.h"

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
int flagDivision=0;
int flagNumeroA=0;
int flagNumeroB=0;
    do
    {
        printf("Elija una opcion\n");
            if(flagNumeroA==0)
            {
                 printf("1.Ingresar 1er operando (A=X)\n");
            }
            else
            {
                printf("1.Ingresar 1er operando (A=%d)\n",numeroA);
            }

            if(flagNumeroB==0)
            {
                printf("2.Ingrese 2do operando (B=Y)\n");
            }
            else
            {
                printf("2.Ingrese 2do operando (B=%d)\n",numeroB);
            }


        printf("3.Calcular todas las operaciones\n");
        printf("4.Informar resultados\n");
        printf("5.Salir\n");

        opcion=pedirEntero("Ingrese una opcion: ");
            switch(opcion)
                {
                case 1: numeroA=pedirEntero("Ingrese el 1er operando: ");
                            flagNumeroA=1;
                        break;
                case 2:
                        numeroB=pedirEntero("Ingrese el 2do operando: ");
                            if(numeroB==0)
                            {
                                flagDivision=1;
                            }
                            flagNumeroB=1;
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
                            if(flagDivision==1)
                            {
                                printf("No se puede dividir por 0\n");
                            }
                            else
                            {
                                printf("La division es: %.2f\n",division);
                            }

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
    fflush(stdin);


    }while(seguir=='s');




    return 0;
}
