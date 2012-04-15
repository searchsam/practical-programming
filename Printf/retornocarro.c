
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
	printf( "Cadena\n" );
	printf( "Segunda" );	/*
							 *	Para escribir en la pantalla se usa un cursor que no vemos.
							 *	Si lo que queremos es sacar cada una en una linea deberemos usar "\n". 
							 *	Es el indicador de retorno de carro. 
							 *	Lo que hace es saltar el cursor de escritura a la linea siguiente:
							 *		Cadena
							 *		Segunda
							 */
	
	

	return 0;
}

/*
 *	Programa en lenguaje c, creado y compilado en djgpp y geany.
 */
