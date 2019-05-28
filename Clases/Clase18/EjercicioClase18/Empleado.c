#include "Empleado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

eEmpleado* new_EmpleadoParametros(int legajo, char* nombre, float salario)
{
    eEmpleado* empleadoRetorno;
    empleadoRetorno = (eEmpleado*)malloc(sizeof(eEmpleado));

    if(empleadoRetorno != NULL)
    {
        empleadoRetorno->legajo = legajo;
        strcpy(empleadoRetorno->nombre,nombre);
        empleadoRetorno->salario = salario;
    }

    return empleadoRetorno;
}

int recibirYGuardarEmpleadoEnBinario (eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;
    int cantidad;

    if(unEmpleado != NULL)
    {
        if((pUnEmpleado=fopen("UnEmpleado.dat","rb")) == NULL)
        {
            printf("ERROR. No se puede abrir el archivo!");
        }
        else
        {
            cantidad = fwrite(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);
            if(cantidad<1)
            {
                retorno = -1;
            }
            else
            {
                retorno = 0;
            }
        }

        fclose(pUnEmpleado);
    }
    else
    {
        printf("ERROR.");
    }

    fclose(pUnEmpleado);

    return retorno;
}

int recibirYLeerEmpleadoEnBinario (eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;
    int cantidad;

    if(unEmpleado != NULL)
    {
        if((pUnEmpleado=fopen("UnEmpleado.dat","rb")) == NULL)
        {
            printf("ERROR. No se puede abrir el archivo!");
        }
        else
        {
            cantidad = fread(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);
            if(cantidad<1)
            {
                if(feof(pUnEmpleado))
                {
                    printf("ERROR.");
                }
            }
            else
            {
                printf("%d--%s--%f--", unEmpleado->legajo, unEmpleado->nombre, unEmpleado->salario);
                retorno = 0;
            }
        }

        fclose(pUnEmpleado);
    }
    else
    {
        printf("ERROR.");
    }

    return retorno;
}

int recibirYLeerEmpleadoEnTxt (eEmpleado* unEmpleado)
{
    int retorno = -1;

    FILE* pUnEmpleado;
    int cantidad;

    if(unEmpleado != NULL)
    {
        if((pUnEmpleado=fopen("UnEmpleado.txt","r")) == NULL)
        {
            printf("ERROR. No se puede abrir el archivo!");
        }
        else
        {
            cantidad = fread(unEmpleado, sizeof(eEmpleado), 1, pUnEmpleado);
            if(cantidad<1)
            {
                if(feof(pUnEmpleado))
                {
                    printf("ERROR.");
                }
            }
            else
            {
                fgets(unEmpleado->legajo,20,pUnEmpleado);

                fgets(unEmpleado->nombre,20,pUnEmpleado);
                fgets(unEmpleado->salario,20,pUnEmpleado);
                printf("%d", unEmpleado->legajo);
                printf("%s", unEmpleado->nombre);

                printf("%f", unEmpleado->salario);
                retorno = 0;
            }
        }

        fclose(pUnEmpleado);
    }
    else
    {
        printf("ERROR.");
    }

    return retorno;
}


