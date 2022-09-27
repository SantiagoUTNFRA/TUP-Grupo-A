#include "Producto.h"

eProducto crearUnProducto()
{
	//TODO Usar funciones que validen los tipos de datos que ingresa el usuario.
	eProducto productoFuncion;

	printf("Ingrese idProducto del Producto: ");
	scanf("%d", &productoFuncion.idProducto);

	printf("Ingrese descripcion del producto: ");
	fflush(stdin);
	gets(productoFuncion.descripcion);

	printf("Ingrese nacionalidad del producto:\n1 EEUU\n2 CHINA\n3 OTRO\n");
	scanf("%d", &productoFuncion.nacionalidad);

	printf("Ingrese tipo del producto:\n1 IPHONE\n2 MAC\n3 IPAD\n4 ACCESORIOS\n");
	scanf("%d", &productoFuncion.tipo);

	printf("Ingrese precio del producto: ");
	scanf("%f", &productoFuncion.precio);

	return productoFuncion;
}

void cargarProductos(eProducto lista[], int size)
{
	for(int i=0 ; i<size ; i++)
	{
		if(lista[i].estado == LIBRE)
		{
			lista[i] = crearUnProducto();
			lista[i].estado = OCUPADO;
			break;
		}

	}
}

void mostrarListaProductos(eProducto lista[], int size)
{
	for(int i=0 ; i < size ; i++)
	{
		if(lista[i].estado == OCUPADO)
		{
			mostrarUnProducto(lista[i]);

		}

	}
}

void mostrarUnProducto(eProducto miProducto)
{
	// Para dar formato tabular al imprimir: %4d %10s %5.2f\n
	printf("%4d %10s %4d %4d  %5.2f\n", miProducto.idProducto, miProducto.descripcion, miProducto.nacionalidad,miProducto.tipo, miProducto.precio);
}

void bajaProducto(eProducto lista[], int size)
{

	int auxIdProducto;

	mostrarListaProductos(lista, size);
	printf("Ingrese el ID del Producto: ");
	scanf("%d", &auxIdProducto);
	for (int i = 0; i < size; ++i)
	{
		if(auxIdProducto == lista[i].idProducto)//lo encontró hacer doble validación, que esté ocupado
		{
			lista[i].estado = LIBRE;// puedo ponerle otro estado como baja
			break;
		}
	}
}


void ordenarProductoPorDescripcion(eProducto lista[], int size)
{
	eProducto auxProducto;

	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j= i+1 ; j<size ; j++)
			{
				if(strcmp(lista[i].descripcion, lista[j].descripcion) > 0)
				{
					auxProducto = lista[i];
					lista[i] = lista[j];
					lista[j] = auxProducto;
				}
			}
	}
}

void ordenarProductoPorPrecio(eProducto lista[], int size)
{
	eProducto auxProducto;

	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j= i+1 ; j<size ; j++)
			{
				if(lista[i].precio > lista[j].precio)
				{
					auxProducto = lista[i];
					lista[i] = lista[j];
					lista[j] = auxProducto;
				}
			}
	}
}

modificarProducto(eProducto lista[], int size)
{
	int auxIdProducto;

	mostrarListaProductos(lista, size);
	printf("Ingrese el ID del Producto a modificar: ");
	scanf("%d", &auxIdProducto);
	for (int i = 0; i < size; ++i)
	{
		if(auxIdProducto == lista[i].idProducto)//lo encontró hacer doble validación, que esté ocupado
		{
			lista[i].estado = LIBRE;// puedo ponerle otro estado como baja
			break;
		}
	}

}


/*
void mostrarUnEmpleado(eEmpleado miEmpleado)
{
	// Para dar formato tabular al imprimir: %4d %10s %5.2f\n
	printf("%4d %10s %5.2f\n", miEmpleado.legajo, miEmpleado.nombre, miEmpleado.sueldo);
}



void mostrarListaProductos(eProducto lista[], int size)
{
	for(int i=0 ; i < size ; i++)
	{
		if(lista[i].estado == OCUPADO)
		{
			mostrarUnEmpleado(lista[i]);
			break;
		}

	}
}


void cargarEmpleados(eEmpleado lista[], int size)
{
	for(int i=0 ; i<size ; i++)
	{
		if(lista[i].estado == LIBRE)
		{
			lista[i] = crearUnEmpleado();
			lista[i].estado = OCUPADO;
			break;
		}

	}
}



*/
