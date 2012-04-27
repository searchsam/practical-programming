
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
 *	Un operador sirve para manipular datos. 
 * 	Los hay de varios tipos: de asignación, de relación, lógicos, aritméticos y de manipulación de bits.
 */

int main() 
{
    pa = 3;	/* 
			 *	Metemos un valor directamente 
			 */
	
	a = b;	/* 
			 *	Le damos el valor de una variable 
			 */
	
	/*
	 * 	Este es un operador que ya hemos visto en el capítulo de Tipos de Datos. 
	 * 	Sirve para dar un valor a una variable. 
	 * 	Este valor puede ser un número que tecleamos directamente u otra variable.
	 */
	
	a = b = c = 10;	/* 
					 *	Podemos dar valores a varias variables a la vez.
					 *	Damos a las variables a,b,c el valor 10 .
					 */
	
	a = b = c = d;	/*
					 *	También podemos asignar a varias variables el valor de otra de un sólo golpe.
					 *	a,b,c toman el valor de d 
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
