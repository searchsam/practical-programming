
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
 * 	Los operadores aritméticos son aquellos que sirven para realizar 
 * 	operaciones tales como suma, resta, división y multiplicación.
 */
     
int main() 
{     
    /**
     *	Suma : (+)
     */
      
    int a = 2;
	int b = 3;
	int c;
		
	c = a + b; /*
				*	Este operador permite sumar variables.
				*/
	
	int a = 2;
	int b = 3;
	int c = 1;
	int d;

	d = a + b + c + 4;	/*
						 *	Por supuesto se pueden sumar varias variables o variables más constantes.
						 */
	
	x = x + 5;	/*
				 *	Podemos utilizar este operador para incrementar el valor de una variable.
				 */
	
	x += 5;	/*	
			 *	Lo mismo que el anerior pero abreviado.
			 */
    
    /**
     * 	Incremento (++)
     */
    
    int x = 5;

	x++;	/*
			 *	Este operador equivale a sumar uno a la variable.
			 * 	
			 * 	Se puede poner antes o después de la variable.
			 */
	
	/**
	 * 	Resta/Negativo (-)
	 */
	
	int a, b;

	x = x - 5;	/*
				 *	Este operador tiene dos usos, uno es la resta que funciona como el operador suma y el otro es cambiar de signo.
				 * 
				 * 	Para la operación resta se aplica todo lo dicho para la suma. Se puede usar también como: x -= 5;.
				 * 	Pero también tiene el uso de cambiar de signo. Poniendolo delante de una variable o constante equivale a multiplicarla por -1. 
				 */
	
	/**
	 * 	Decremento (--)
	 */
	
	/*
	 * 	Es equivalente a ++ pero en vez de incrementar disminuye el valor de la variable. Equivale a restar uno a la variable.
	 */
	
	/**
	 * 	Multiplicación y punteros (*)
	 */
	
	/*
	 * 	Este operador sirve para multiplicar y funciona de manera parecida a los anteriores.
	 * 	También sirve para definir y utilizar punteros, pero eso lo veremos más tarde.
	 */
	
	/**
	 * 	División (/)
	 */
	
	/*
	 * 	Este funciona también como los anteriores pero hay que tener cuidado. Si dividimos dos número en coma flotante (tipo float) tenemos las división con sus correspondientes decimales. Pero si dividimos dos enteros obtenemos un número entero. Es decir que si dividimos 4/3 tenemos como resultado 1. El redondeo se hace por truncamiento, simplemente se eliminan los decimales y se deja el entero.
	 * 	
	 * 	Si dividimos dos enteros el resultado es un número entero, aunque luego lo saquemos por pantalla usando %f o %d no obtendremos la parte decimal.
	 */
	
	/**
	 * 	Resto (%)
	 */
	
	int a;
	
	a = 18 % 5;	/*
				 *	Si con el anterior operador obteníamos el módulo o cociente de una división entera con éste podemos tener el resto. 
				 * 	No funciona más que con enteros, no vale para números float o double.
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
