
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
 * 	Las constantes son aquellos datos que no pueden cambiar a lo largo de la ejecucion de un programa.
 */
 
#define PI 3.1416	/*
					 * 	Al definir una constante con nombre estamos dando un nombre al valor, a 3.1416 le llamamos PI.
					 * 		#define nombre_de_la_constante	valor_de_la_constante
					 * 	De esta forma cada vez que el compilador encuentre el nombre PI lo sustituira por 3.1416.
					 */

#define CONSTANTE 14	/*
						 *	Solo se le puede dar un valor con #define, y solo una vez. 
						 * 	Tampoco podemos usar el scanf para dar valores a una constante.
						 */

int main() 
{
    scanf( "%i", CONSTANTE );	/*
								 *	Eso seria como hacer:
								 * 		scanf( "%i", 14 );
								 * 	Esto es muy grave, estamos diciendo que el valor que escribamos en scanf se almacene 
								 * 	en la posicion 14 de la memoria, lo que puede bloquear el ordenador.
								 */
	
	/*
	 * 	Las constantes se suelen escribir en mayusculas solo se puede definir una constante por fila. 
	 * 	No se pone ";" al final.
	 * 	Las constantes nos proporcionan una mejor comprension del codigo fuente.
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
