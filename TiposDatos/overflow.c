
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
 * 	El overflow es lo que se produce cuando intentamos almacenar en una variable un numero mayor del maximo permitido. 
 * 	El comportamiento es distinto para variablesde numeros enteros y para variables de numeros en coma flotante.
 */
 
int main() 
{
    int num1;

    num1 = 2147483648;
    printf( "El valor de num1 es: %i\n", num1 );
    
    /*
     * 	Con numeros enteros
     * 
     * 	En mi ordenador y usando DJGPP bajo Dos el tamaño del tipo int es de 4bytes(4*8=32bits). 
     * 	El numero maximo que se puede almacenar en una variable tipo int es por tanto 2.147.483.647 (ver apartado anterior). 
     * 	Si nos pasamos de este numero el que se guardara sera el siguiente pero empezando desde el otro extremo, es decir, el -2.147.483.648. 
     * 	El compilador seguramente nos dara un aviso (warning) de que nos hemos pasado.
	 */
	 
	/*
	 *	Con numeros en coma flotante
	 * 
	 * 	El comportamiento con numeros en coma flotante es distinto. 
	 * 	Dependiendo del ordenador si nos pasamos del rango al ejecutar un programa se puede producir un error y detenerse la ejecucion.
	 * 
	 * 	Con estos numeros tambien existe otro error que es el underflow. 
	 * 	Este error se produce cuando almacenamos un numero demasiado pequeño (3,4E-38 en float).
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
