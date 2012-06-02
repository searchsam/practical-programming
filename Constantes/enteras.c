
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
 * Una constante entera es un nuemro con un valor entero, consiste en una secuencia de digitos.
 *
 * Las constantes enteras se pueden escribir en tres sistemas numericos diferentes:
 * 	
 * 	decimal ( base 10 )	octal ( base 8 )	hexadecimal ( base 16 )
 */
	 
/*
 * 	CONSTANTES ENTERAS DECIMALES
 * 	Una constante entera decimal puede ser cualquier combinacion de digitos tomados del conjunto de "0" a "9".
 * 	Si la constante tiene dos o mas digitos, el primero de ellos debe de ser diferente de "0".
 * 
 * 	Ejemplo:
 * 		0		1		743		5280		32767		9999
 */
#define entero_decimal 9999
/* 
 * 	Las sigientes constantes enteras decimales escritas incorrectamente
 * 		12,254		caracter ilegal (,).
 * 		36.0		caracter ilegal (.).
 * 		10 20 30	caracter ilegal (espacio en blanco).
 * 		123-15-6789	caracter ilegal (-).
 * 		0900		el primer digito no puede ser cero.
 */ 
 
/*
 * 	CONSTANTES ENTERAS OCTALES
 * 	La constante entera octal puede estar formadapor cualquier combinacion de digitos tomados del conjunto de "0" a "7".
 * 	El primer digito debe ser obligatoriamente 0, con el fin de identificar la constante como un numero octal.
 * 
 * 	Ejemplo:
 * 		0		01		0743		077777
 */
#define entero_octal 0743
/* 
 * 	Las sigientes constantes enteras octales escritas incorrectamente
 * 		743			no comienza por 0.
 * 		05280		digito ilegal (8).
 * 		0777.777	caracter ilegal (.).
 */ 

/*
 * 	CONSTANTE ENTERA ENADECIMAL
 * 	Una constante entera hexadecimal debe comensar por 0x o 0X.
 * 	Puede aparecer despues de cualquier combinacion de digitos tomados del conjunto de "0" a "9"
 * 	y de "a" a "f" ( tanto minusculas como minusculas ). Las letras de la "a" a la "f" 
 * 	( o de la "A" a la "F" ) representan las cantidades ( decimales ) de 10 a 15, respectivamente.
 * 
 * 	Ejemplo:
 * 		0x		0x1		0x7FFF		0xabcd
 */
#define entero_hexadecimal 0x7FFF

int main()	
{

	printf ( "Esta es una variable entera decimal %d\n\n", entero_decimal );
	printf ( "Esta es una variable entera decimal %O\n\n", entero_octal );
	
	return 0;	
}	

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 */
