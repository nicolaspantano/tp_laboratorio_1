int sumarNumeros(int numeroA, int numeroB)
{
    int resultado=numeroA+numeroB;
    return resultado;
}
int restarNumeros(int numeroA, int numeroB)
{
    int resultado=numeroA-numeroB;
    return resultado;
}
float dividirNumeros(int numeroA,int numeroB)
{
    float resultado=(float)numeroA/numeroB;
    return resultado;
}
int multiplicarNumeros(int numeroA,int numeroB)
{
    int resultado=numeroA*numeroB;
    return resultado;
}
int factorial(int numero)
{ int resultado;
    if(numero==0||numero==1)
    {
        resultado=1;
    }
    else
    {
        resultado=numero*factorial(numero-1);
    }

  return resultado;
}
int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s",texto);
    scanf("%d",&unEntero);
    return unEntero;
}
