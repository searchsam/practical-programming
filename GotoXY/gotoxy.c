
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
#include <conio.h>

int main()
{
	gotoxy( 20, 10 );	/*
						 *	Esta funcion solo esta disponible en compiladores de C que dispongan de la biblioteca <conio.h>
						 */

	printf( "Hola\n" );	/*
						 *	Hemos visto que cuando usamos printf se escribe en la posicion actual del cursor 
						 * 	y se mueve el cursor al final de la cadena que hemos escrito.
						 * 	
						 * 	Que pasa cuando queremos escribir en una posicion determinada de la pantalla? 
						 * 	La solucion esta en la funcion gotoxy. 
						 * 	Escribimos 'Hola' en la fila 10, columna 20 de la pantalla.
						 */
	/*
	 *	Para usar gotoxy hay que incluir la biblioteca conio.h
	 *	Fijate que primero se pone la columna (x) y luego la fila (y). 
	 * 	La esquina superior izquierda es la posicion (1, 1).
	 */

	return 0;
}

/*
 *	Primer programa creado en lenguaje c compilado en djgpp y geany.
 * 
 *	Para compilar un programa desde djgpp sin geany hace desde la 
 *	linea de conmandos con el siguiente comando: 
 *	 	gcc -c nombre.c -o nombre.exe
 *  y agregar la siguiente linea antes de return 0;
 *      system("PAUSE");
 *  si esto no funciona prueba a añadir:
 *      getch();
 */
