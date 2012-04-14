
/*
 *	Programa creado en lenguaje c, compilado en djgpp y geany.
 */

#include <stdio.h> /* 	
					*	#include es lo que se llama una directiva. 
					* 	Sirve para indicar al compilador que incluya otro archivo. 
					*	Cuando en compilador se encuentra con esta directiva la sustituye por el archivo indicado. 
					*	En este caso es el archivo stdio.h que es donde esta definida la funcion printf, que veremos luego.
					*/

int main()	/*	
			 * 	Es la funcion principal del programa. 
			 *	Todos los programas de C deben tener una funcion llamada main. 
			 *	Es la que primero se ejecuta. 
			 *	El int (viene de Integer=Entero) que tiene al principio significa que cuando la funcion main acabe devolvero un numero entero.
			 */

{	/*	Son las llaves que indican el comienzo de una funcion, en este caso la funcion main. */

	/* Aqui va el cuerpo del programa */
	
	/*	
	 *	Esto es un comentario, no se ejecuta. Sirve para describir el programa. 
	 *	Conviene acostumbrarse a comentar los programas. 
	 *	Un comentario puede ocupar mas de una linea. 
	 *	Por ejemplo el comentario:	
	 */
	 
	 /* Este es un comentario
	   que ocupa dos filas */
	  
	pri/* Esto es un comentario */ntf( "Hola mundo" );	/*
														 *	GARRAFAL
														 *	Los comentarios se pueden poner casi en cualquier parte. 
														 *	Excepto en medio de una instruccion.
														 */

	printf( /* Esto es un comentario */ "Hola mundo" );	/*
														 *	No daria error (al menos usando DJGPP), pero es una fea costumbre:
														 */

	printf( "Hola/* Esto es un comentario */ mundo" );	/*
														 *	Que no daria error, pero al ejecutar tendriamos:
														 *		Hola /* Esto es un comentario */ //mundo
														 //*	porque /* Esto es un comentario */ queda dentro de las comillas 
														 /*	y C lo interpreta como texto, no como un comentario.
														 */
	   
	return 0;	/*
				 * Como he indicado antes el programa al finalizar develve un valor entero. 
				 *	Como en este programa no se pueden producir errores (nunca digas nunca jamas) la salida siempre sera 0. 
				 *	La forma de hacer que el programa devuelva un 0 es usando return.
				 */

}	/*
	 *	...y cerramos llaves con lo que termina el programa. 
	 *	Todos los programas finalizan cuando se llega al final de la funcion main.
	 */

/** Codigo de search-sam Samuel J. Gutierrez Aviles */
