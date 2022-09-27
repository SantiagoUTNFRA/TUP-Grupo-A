

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LIBRE 0
#define OCUPADO 1

#define EEUU 1
#define CHINA 2
#define OTRO 3

#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4

typedef struct
{
	//Atributos o campos
	int idProducto; // Deberia ser autoIncremental. NO lo carga el usuario.
	char descripcion[50];
	int nacionalidad;
	int tipo;
	float precio;
	int estado;
}eProducto;

void cargarProductos(eProducto lista[], int size);
eProducto crearUnProducto();
void mostrarListaProductos(eProducto lista[], int size);
void mostrarUnProducto(eProducto miProducto);
void bajaProducto(eProducto lista[], int size);
void ordenarProductoPorDescripcion(eProducto lista[], int size);
void ordenarProductoPorPrecio(eProducto lista[], int size);
void modificarProducto(eProducto lista[], int size);

/*

void ordenarEmpleadosPorNombre(eEmpleado lista[], int size);
*/
