
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
    float numero;	/*
					 *	Declaracion de una variable de tipo float.
					 * 	En este tipo de variable podemos almacenar numeros decimales, no solo enteros como en los anteriores. 
					 * 	El rango de posibles valores es del 3,4E-38 al 3,4E38.
					 */
	
	float num=4060.80;
	printf( "El valor de num es : %f", num );	/*
												 *	Para imprimir valores tipo float Usamos %f.
												 * 	Queda como resultado:
												 * 		El valor de num es: 4060.80
												 */
												 
	float num = 4060.80;
	printf( "El valor de num es: %e", num );	/*
												 *	Si queremos escribirlo en notacion exponencial usamos %e.
												 * 	Queda como resultado:
												 * 		El valor de num es: 4.06080e003
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
