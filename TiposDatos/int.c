
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

int x;	/*
		 *	Variable Global
		 * 	Variable que se declara fuera de la funcion main.
		 */

int main() 
{
    int numero;	/*
				 *	Esto hace que declaremos una variable llamada numero que va a contener un numero entero.
				 * 	En una variable de este tipo se almacenan numeros enteros (sin decimales). 
				 * 	El rango de valores que admite es -32767 a 32767. 
				 * 	Cuando definimos una variable lo que estamos haciendo es decirle al compilador 
				 * 	que nos reserve una zona de la memoria para almacenar datos de tipo int. 
				 */
	
	/*
	 * 	La anterior es una variable local.
	 * 	La diferencia practica es que las variables globales se pueden usar en cualquier procedimiento. 
	 * 	Las variables locales solo pueden usarse en el procedimiento en el que se declaran. 
	 * 	Procedimiento (o funcion, o rutina, o subrutina, como prefieras)
	 * 	Es buena costumbre usar variables locales que globales.
	 */
	 
	int x, y;	/*
				 *	Podemos declarar mas de una variable en una sola linea
				 */
	
	printf( "%i", x );	/*
						 *	Vamos a ir u poco mas alla con la funcion printf. 
						 * 	Supongamos que queremos mostrar el contenido de la variable x por pantalla.
						 * 	Suponiendo que x valga 10 ( x=10 ) en la pantalla tendriamos
						 * 		10
						 */
	
	/*
	 * 	Recuerdas el simbolo "\" que usabamos para sacar ciertos caracteres. 
	 * 	El uso del "%" es parecido. "%i" no se muestra por pantalla, 
	 * 	se sustituye por el valor de la variable que va detras de las comillas. 
	 * 	( %i, de integer=entero en ingles).
	 */
	 
	printf( "%i ", x );
	printf( "%i", y );	/*
						 *	Para ver el contenido de dos variables, por ejemplo x e y, podemos hacer lo anterior.
						 * 	Suponiendo ( x=10, y=20) el resultado seria:
						 *		10 20
						 */
	
	printf( "%i %i", x, y ); /*
							  *	Tambien podemos usar esta forma para poner el numero de variables que queramos. 
							  * Obtenemos el mismo resultado con menos trabajo. 
							  * No olvidemos que por cada variable hay que poner un %i dentro de las comillas.
							  */
	
	printf( "El valor de x es %i, ¡que bien!\n", x );	/*
														 *	Tambien podemos mezclar texto con enteros que quedara como:
														 * 		El valor de x es 10, ¡que bien!
														 * 	Como vemos %i al imprimir se sustituye por el valor de la variable.
														 */
	
	x = 10;	/*
			 *	Asi se le asigna valor a la variable
			 */
	
	int x = 15;	/*
				 *	int x = 15, y = 20;
				 */
	
	int x, y = 20;	/*
					 *	Podriamos pensar que x e y son igual a 20, pero no es asi. 
					 * 	La variable x esta sin valor inicial y la variable 'y' tiene el valor 20.
					 */
	
	/*
	 * 	Si imprimimos una variable a la que no hemos dado ningun valor no obtendremos 
	 * 	ningun error al compilar pero la variable tendra un valor cualquiera.
	 */
	
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
