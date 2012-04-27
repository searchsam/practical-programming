
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
 * 	Los operadores aritméticos son aquellos que sirven para realizar 
 * 	operaciones tales como suma, resta, división y multiplicación.
 */
     
int main() 
{     
    /**
     *	Suma : (+)
     */
      
    int a = 2;
	int b = 3;
	int c;
		
	c = a + b; /*
				*	Este operador permite sumar variables.
				*/
	
	int a = 2;
	int b = 3;
	int c = 1;
	int d;

	d = a + b + c + 4;	/*
						 *	Por supuesto se pueden sumar varias variables o variables más constantes.
						 */
	
	x = x + 5;	/*
				 *	Podemos utilizar este operador para incrementar el valor de una variable.
				 */
	
	x += 5;	/*	
			 *	Lo mismo que el anerior pero abreviado.
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
