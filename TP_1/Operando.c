#include <stdio.h>
#include "Operandos.h"

float PedirOperando(char texto[])
{
    float operando;

    printf("%s",texto);
    scanf("%f",&operando);

    return operando;
}
