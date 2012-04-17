
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
#include <conio.h>

int main()
{
	printf( "Lo que sea en la pantalla" );
	
	clrscr();	/*
				 *	clear screen, borrar pantalla
				 * 	Esta funcion no solo borra la pantalla, 
				 * 	sino que ademas situa el cursor en la posicion (1, 1), 
				 * 	en la esquina superior izquierda.
				 */
	
	printf( "Hola\n" );
	
	/*
	 * 	Este metodo solo vale para compiladores que incluyan el fichero stdio.h. 
	 * 	Este metodo solo en valido en los sistemas con base en DOS (MS-DOS equivalente).
	 */
	 
	return 0;
}

/*
 *	Primer programa creado en lenguaje c compilado en djgpp y geany.
 * 
 *	Para compilar un programa desde djgpp sin geany hace desde la 
 *	linea de conmandos con el siguiente comando: 
 *	 	gcc -c nombre.c -o nombre.exe
 *  y agregar la siguiente linea antes de return 0;
 *      system("PAUSE");
 *  si esto no funciona prueba a añadir:
 *      getch();
 */
