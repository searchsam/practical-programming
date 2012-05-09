
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

/*
 * 	Los operadores de condición se utilizan para comprobar las condiciones de las sentencias de control de flujo
 */
 
int main() 
{
    printf( "10 > 5 da como resultado %i\n", 10>5 );
	printf( "10 > 5 da como resultado %i\n", 10>5 );
	printf( "5== 5 da como resultado %i\n", 5==5 );
	printf( "10==5 da como resultado %i\n", 10==5 );	/*
														 *	Cuando se evalúa una condición el resultado que se obtiene es 0 si no se cumple y un número distinto de 0 si se cumple. 
														 * 	Normalmente cuando se cumplen devuelven un 1. 
														 */
	
	/*
	 * 	No sólo se pueden comparar constantes, también se pueden comparar variables.
	 */
	 
    return 0;
}

/*
 *	Programa en lenguaje c,  creado y compilado en djgpp y geany.
 * 
 * 	Para compilar un programa desde djgpp sin geany hace desde la 
 *	linea de conmandos con el siguiente comando: 
 *	 	gcc -c nombre.c -o nombre.exe
 *  y agregar la siguiente linea antes de return 0;
 *      system("PAUSE");
 *  si esto no funciona prueba a añadir:
 *      getch();
 */
