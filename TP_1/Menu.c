#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Operaciones.h"
#include "Operandos.h"
void ElegirOpcion(void)
{
    float op1;
    float op2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorialA;
    int factorialB;
    int flag1=0;
    int flag2=0;

    int opcion;
    int seguir = 's';

    do
    {
        if(flag1==1&&flag2==1)
        {
            printf("A= %.2f\nB= %.2f\n",op1,op2);
        }
        printf("1. Ingrese el primero Operando\n2. Ingrese Segundo Operando\n3. Calcular todas las Operaciones \n4. Informar Resultado\n5. Salir\n");
        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:

                op1 = PedirOperando("Ingrese el Operando: ");
                flag1=1;
                break;
            case 2:
                op2 = PedirOperando("Ingrese el Operando: ");
                flag2=1;
                break;
            case 3:
                if (flag1==0||flag2==0)
                {
                    printf("Ingrese Los 2 Operando para poder calcular!!\n");
                }
                else
                {
                    suma=calcularSuma(op1,op2);
                    resta=calcularResta(op1,op2);
                    multiplicacion=calcularMultiplicacion(op1,op2);

                    factorialA=calcularFactorail(op1);
                    factorialB=calcularFactorail(op2);
                }
                break;
            case 4:
                if (flag1==0||flag2==0)
                {
                    printf("Ingrese los dos Operando para poder calcular\n");
                }
                else
                {
                    printf("El resultado de A+B es: %.2f\nEl resultado de A-B es: %.2f\nEl resultado de A*B es: %.2f\n",suma,resta,multiplicacion);
                    division=calcularDivision(op1,op2);
                    printf("El factorial de A es: %d\nEl factorial de B es: %d\n",factorialA,factorialB);
                }

                break;
            case 5:
                printf("Estas Saliendo del Sistema\n");
                seguir='n';
                break;
            default:
                printf("Error, Ingrese una Opcion valida\n");

        }

    }while (seguir=='s');


}
