/*
 ============================================================================
 Name        : ABM_Struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 8-2:
	Una empresa importadora que comercializa productos Apple,
	decide registrar de sus productos los siguientes datos:
		idProducto (numerico)
		descripcion (alfanumérico)
		nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
		tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
		precio (numérico decimal)
	Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
		1- ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
		2- BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
		3- MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
		4- LISTADO Productos.
		5- LISTADO ordenado por precio.
		6- LISTADO ordenado por descripción.
 ============================================================================
 */

#include "Producto.h"
#define TAM 3

int main(void) {
	setbuf(stdout, NULL);
	int opcion;

	eProducto listaProductos[TAM] ={
			{1000,"Notebook",1,1,50000,OCUPADO},
			{1001,"IPHONE",1,1,30000,OCUPADO},
			{1002,"Accesorio",1,1,90000,OCUPADO}
	};
	//Inicializo estado de la estructura. Llevar a una funcion
	/*
	for(int i=0; i<TAM; i++)
	{
		listaProductos[i].estado = LIBRE;

	}*/
	do
	{
		printf("1.ALTA\n2.BAJA\n3.MODIFICACION\n4.LISTADO Productos\n5.LISTADO ordenado por precio\n6.LISTADO ordenado por descripción\n7.SALIR\nIngrese una opcion: \n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				cargarProductos(listaProductos, TAM);
				break;

			case 2:
				bajaProducto(listaProductos, TAM);
				break;

			case 3:
				modificarProducto(listaProductos, TAM);
				break;

			case 4:
				mostrarListaProductos(listaProductos, TAM);
				break;

			case 5:
				ordenarProductoPorPrecio(listaProductos, TAM);
				break;

			case 6:
				ordenarProductoPorDescripcion(listaProductos, TAM);
				break;

			case 7:
				break;
		};
	}while(opcion != 7);

	return EXIT_SUCCESS;
}











