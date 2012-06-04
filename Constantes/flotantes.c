
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
 * 	CONSTANTE EN COMA FLOTANTE
 * 	Una constante en coma flotante es un numero en base 10 que contiene un punto decimal
 * 	o un exponente o ambos.
 * 
 * 	Ejemplo:
 * 		0.		1.			0.2			827.602
 * 		50000	0.000743	12.3		341.0066
 * 		2E-8	0.006e-3	1.6667E+8	.12121212e12
 */
#define flotante 0.006E-3
/*
 * 	Las siguientes no son constantes en coma flotante por las razones indicadas.
 * 		1		Deben encontrarse presente un punto decimal o un exponente.
 * 		1,000.0	Caracter ilegal (,).
 * 		2E+10.2	El exponente debe ser una cantidad entera (no puede contener un puento decimal).
 * 		3E 10	Caracte ilegal (espacio en blanco) en el exponente.
 */

int main()	
{

	printf ( "Esta es una variable en coma flotante %f\n\n", flotante );
	
	return 0;	
}	

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 */
