
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
	/*
	 * 	A las variables no se les puede dar cualquier nombre. 
	 * 	No se pueden poner mas que letras de la 'a' a la 'z' (la ñ no vale), numeros y el simbolo '_'. 
	 * 	No se pueden poner signos de admiracion, ni de interrogacion... 
	 * 	El nombre de una variable puede contener numeros, pero simpre debe empezar con letras.
	 */
	 
	camiones
	numero
	buffer
	a1
	j10hola29
	num_alumnos
	
    /*
     *	Ejemplos de nombres no validos:
     */
    
	1abc
	nombre?
	num/alumnos;
	
	/*
	 * 	Tampoco valen como nombres de variable las palabras reservadas que usa el compilador. 
	 * 	Por ejemplo: for, main, do, while.
	 * 	Por ultimo es interesante señalar que el C distingue entre mayusculas y minusculas. 
	 * 	Por lo tanto las siguientes palabras seran tres variables distintas.
	 */
	 
	Nombre
	nombre
	NOMBRE
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
