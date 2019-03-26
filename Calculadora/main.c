#include <stdio.h>
#include <stdlib.h>
#include "Funciones Matematicas.h"
int main()
{
    int opcion;
    char seguir='s';
    int numeroA;
    int numeroB;
    printf("1.Ingresar el operando A=X\n2.Ingresar el operando B=Y\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir del programa\nElija una opcion: ");
      fflush(stdin);
      scanf("%d",&opcion);

    do{
      switch(opcion)
      {
        case 1:
            numeroA=pedirEntero("Ingrese el operando A");
            break;
        case 2:
            numeroB=pedirEntero("Ingrese el operando B");
            break;
        case 3:
            printf("Estoy haciendo los calculos!!\n");
            break;
        case 4:
            printf("Estoy informando!!\n");
            break;
        case 5:
            printf("Estoy saliendo del programa!!\n");
            break;
        default:
            printf("No ingreso una opcion valida\n");
            break;
      }
    system("pause");
    system("cls");

  }while(seguir=='s');

    return 0;
}
