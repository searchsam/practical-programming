
/**
 *  Copyright © 2012 CLINUX (Comunidad Linux UNI)
 *  
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

#define CAJAS 4
#define UNIDADES_POR_CAJA 25
#define PRECIO_POR_UNIDAD 100	
#define PRECIO_POR_CAJA UNIDADES_POR_CAJA * PRECIO_POR_UNIDAD
#define IMPUESTOS 1.16

int main()
{
	int precio;

	precio = ( CAJAS * PRECIO_POR_CAJA ) * ( IMPUESTOS );
	
	printf( "El precio total es: %i", precio  );
	
	return 0;
}

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 * 
 * 	Para compilar un programa desde djgpp sin geany hace desde la 
 *	linea de conmandos con el siguiente comando: 
 *	 	gcc -c nombre.c -o nombre.exe
 *  y agregar la siguiente linea antes de return 0;
 *      system("PAUSE");
 *  si esto no funciona prueba a añadir:
 *      getch();
 */
