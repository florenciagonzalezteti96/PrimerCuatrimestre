#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idSector;
    char descripcion [60];
    int contadorEmpleados;

}eAuxiliar;


typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int idSector;

    char descripcion[20];
    float valor;

}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;

    int cantidadHoras;
    int idSector;
    float sueldoBruto;
    float sueldoNeto;




    int estado;

} eEmpleado;

void mostrarEmpleado(eEmpleado[], eSector[], int);
void cargarEmpleado(eEmpleado lista[], int tam, eSector sectores[], int tamSec);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);
void encontrarEmpleadosPorSector(eEmpleado[], int tamEmpleado, eSector[], int tamSector);
int pedirSector (eSector sectores[], int tamSec);
void contarEmpleadosPorSector(eEmpleado lista[], int tamEmpleado, eSector sectores[], int tamSector);





