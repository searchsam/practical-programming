
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
 * 	CONSTANTE DE CARACTER
 * 	Una constante de caracter es solo un caracter, encerrado con comillas simples.
 * 	Las constantes de caracter tienen valores numericas determinados por el conjunto 
 * 	de caracteres (Conjunto Estandar Americano para el Intercambio de Informacion ASCII)
 * 	particular de la computadora. (En tabla ASCII se encuentra el conjunto completo).
 * 	
 * 	Ejemplo:
 * 		'A'		'X'		'3'		'?'		' '
 */
#define caracter 'Z'

/*
 * 	SECUENCIAS DE ESCAPE
 * 	Ciertos caracteres no imprimibles, asi como la barra inclinada hacia atras (\) y la comilla
 * 	simple ('), se pueden expresar en terminos de secuencias de escape. Una secuencia de escape
 * 	siempre comienza con una barra inclinada hacia atras y es segida por uno o mas caracteres espaciales.
 * 	
 * 	Ejemplo:
 * 		sonido (alerta)					\a
 * 		retroceso						\b
 * 		tabulador horizontal			\t
 * 		tabulador vertical				\v
 * 		nueva linea (avance de linea)	\n
 * 		avance de pagina				\f
 * 		retorno de carro				\r
 * 		comillas (")					\"
 * 		comilla simple (')				\'
 * 		signo de interrogacion (?)		\?
 * 		barra inclinada hacia atras (\)	\\
 * 		nulo							\0
 */
#define caracter_escape '\\'

int main()	
{

	printf ( "Esta es una variable de caracter %c\n\n", caracter );
	printf ( "Esta es una variable de secuencia de escape %c\n\n", caracter_escape );
	
	return 0;	
}	

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 */
