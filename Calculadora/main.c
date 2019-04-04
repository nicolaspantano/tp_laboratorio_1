#include <stdio.h>
#include <stdlib.h>
#include "Funciones Matematicas.h"
#include "Funcion pedir numero.h"

int main(){

int opcion;
char seguir='s';
float numeroA;
float numeroB;
float suma;
float resta;
float division;
float producto;
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
                printf("1.Ingresar 1er operando (A=%.2f)\n",numeroA);
            }

            if(flagNumeroB==0)
            {
                printf("2.Ingrese 2do operando (B=Y)\n");
            }
            else
            {
                printf("2.Ingrese 2do operando (B=%.2f)\n",numeroB);
            }


        printf("3.Calcular todas las operaciones\n");
        printf("4.Informar resultados\n");
        printf("5.Salir\n");

        opcion=pedirEntero("Ingrese una opcion: ");
            switch(opcion)
                {
                case 1: numeroA=pedirFloat("Ingrese el 1er operando: ");
                            flagNumeroA=1;
                        break;
                case 2:
                        numeroB=pedirFloat("Ingrese el 2do operando: ");
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
                        printf("La suma es: %.2f\n",suma);
                        printf("La resta es: %.2f\n",resta);
                            if(flagDivision==1)
                            {
                                printf("No se puede dividir por 0\n");
                            }
                            else
                            {
                                printf("La division es: %.2f\n",division);
                            }

                        printf("El producto es: %.2f\n",producto);
                            if(numeroA<0||numeroA!=(int)numeroA)
                            {
                                printf("No se puede hacer factorial al operando A ingresado\n");
                            }
                            else
                            {
                                printf("El factorial de A es: %d\n",factorialA);
                            }


                            if(numeroB<0||numeroB!=(int)numeroB)
                            {
                                printf("No se puede hacer factorial al operando B ingresado\n");
                            }
                            else
                            {
                                printf("El factorial de B es: %d\n",factorialB);
                            }

                        break;
                case 5:
                        printf("Saliendo...\n");
                        return 0;

                default:
                        printf("No ingreso una opcion correcta\n");
                        break;

                }
    system("pause");
    system("cls");
    fflush(stdin);


    }while(seguir=='s');

}
