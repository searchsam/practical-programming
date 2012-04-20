
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

int main() 
{
    char letra;	/*
				 *	Declaracion una variable de tipo char.
				 *	Las variables de tipo char sirven para almacenar caracteres. 
				 * 	Los caracteres se almacenan en realidad como numeros del 0 al 255. 
				 * 	Los 128 primeros (0 a 127) son el ASCII estandar. 
				 * 	El resto es el ASCII extendido y depende del idioma y del ordenador. 
				 */
				 
	letra = 'A'; 
	letra = 65;	/*
				 *	En una variable char solo podemos almacenar solo una letra, no podemos almacenar ni frases ni palabras.
				 * 	En ambos casos se almacena la letra 'A' en la variable. 
				 * Esto es asi porque el codigo ASCII de la letra 'A' es el 65.
				 */
	
	letra = 'A';
	printf( "La letra es: %c.", letra );	/*
											 *	Para imprimir un char usamos el simbolo %c (c de character=caracter en ingles)
											 * 	El resultado seria:
											 * 		La letra es A
											 */
	
	letra = 'A';
	printf( "El numero ASCII de la letra %c es: %i.", letra, letra );	/*
																		 *	Tambien podemos imprimir el valor ASCII de la variable usando %i en vez de %c.
																		 * 	El resultado seria:
																		 * 		El codigo ASCII de la letra A es 65.
																		 */
	
	/*
	 * 	Como vemos la unica diferencia para obtener uno u otro es el modificador (%c o %i) que usemos.
	 * 
	 * 	Las variables tipo char se pueden usar (y de hecho se usan mucho) para almacenar enteros. 
	 * 	Si necesitamos un numero pequeño (entre -127 y 127) podemos usar una variable char (8bits) 
	 * 	en vez de una int (16bits), con el consiguiente ahorro de memoria.
	 * 
	 * 	Todo lo demas dicho para los datos de tipo
	 * 		int
	 * 	se aplica tambien a los de tipo
	 * 		char
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
