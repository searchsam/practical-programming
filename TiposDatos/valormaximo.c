
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
 * 	Lo primero que tenemos que conocer es el tamaño en bytes de ese tipo de dato.
 */
 
int main() 
{
    int num1;

    printf( "El tipo int ocupa %i bytes\n", sizeof(int) );
    
    /*
     * 	Como sabemos 1byte = 8bits. Por lo tanto el tipo int ocupa 4*8=32 bits.
     * 
     * 	Ahora para calcular el maximo numero debemos elevar 2 al numero de bits obtenido. 
     * 	En nuestro ejemplo: 2^32=4.294.967.296. 
     * 	Es decir en un int se podria almacenar un numero entre 0 y 4.294.967.296.
     * 
     * 	Sin embargo esto solo es cierto si usamos un tipo unsigned (sin signo, se hace añadiendo la palabra unsigned antes de int). 
     * 	Para los tipos normales tenemos que almacenar numeros positivos y negativos. 
     * 	Asi que de los 4.294.967.296 posibles numeros la mitad seran positivos y la mitad negativos. 
     * 	Por lo tanto tenemos que dividir el numero anterior entre 2 = 2.147.483.648. 
     * 	Como el 0 se considera positivo el rango de numeros posibles que se pueden almacenar en un int seria: 
     * 		-2.147.483.648 a 2.147.483.647.
     * 
     * 	Resumen:
     * 		Obtenemos el numero de bytes.
     * 		Multiplicamos por ocho (ya lo tenemos en bits).
     * 		Elevamos 2 al numero de bits.
     * 		Dividimos entre 2.
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
