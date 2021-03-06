#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char id[120];
    char nombre[120];
    char horasTrabajadas[120];
    char sueldo[120];
    Employee* pEmployee;
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
    while(!feof(pFile))
    {
        pEmployee=(Employee*)malloc(sizeof(Employee));
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
        pEmployee->id=atoi(id);
        strcpy(pEmployee->nombre,nombre);
        pEmployee->horasTrabajadas=atoi(horasTrabajadas);
        pEmployee->sueldo=atoi(sueldo);
        ll_add(pArrayListEmployee,pEmployee);
    }

    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
