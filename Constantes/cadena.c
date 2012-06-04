
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
 * 	CONSTANTE DE CADENA DE CARACTERES
 * 	Una costante de cadena de cadena de caracteres consta de cualquier numero de caracteres
 * 	consecutivos o ninguno, encerrado entre comillas dobles.
 * 	
 * 	Ejemplo:
 * 		"verde"		"Managua, Nic 2012"			"270-32-3456"
 * 		"$19.95"	"LA RESPUESTA CORRECTA ES"	"2*(I+3/J)"
 * 		"     "		"Linea 1\nLinea 2\nLinea 3"	""
 */
#define cadena "\tPara continuar, pulsar la tecla \"RETURN\"\n"

int main()	
{

	printf ( "Esta es una constante de cadena de caracteres \n%s\n\n", cadena );
	
	return 0;	
}	

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 */
