# Buenas Practicas

Una _buena práctica_ es un método o técnica que ha demostrado consistentemente resultados superiores a los obtenidos con
otros medios, y que se utiliza como punto de referencia. Además, una "buena" práctica puede llegar a convertirse en una 
mejor medida para descubrir mejoras. Buena práctica es considerada por algunos como una palabra de moda de negocios, 
que se utiliza para describir el proceso de desarrollo y seguimiento de una forma estándar de hacer las cosas que 
múltiples organizaciones pueden utilizar.

# Buenas Practicas de Codificacion

Las buenas prácticas de codificación son un conjunto de reglas informales que la comunidad de desarrollo de software 
ha aprendido con el tiempo a mejorar la calidad de las aplicaciones y simplificar su mantenimiento. 
Ellos se pueden dividir en muchos niveles basado en el lenguaje de codificación, la plataforma, el entorno de destino 
y así sucesivamente. Uso de buenas prácticas para una situación dada reduce en gran medida la probabilidad de introducir
errores en sus aplicaciones, independientemente de cuál es el modelo de desarrollo de software se utiliza para crear 
dicha aplicación.

En un entorno de equipo o la colaboración en grupo, buenas prácticas de codificación asegurar el uso de normas y códigos
uniformes, reduciendo los errores de supervisión y el tiempo dedicado a la revisión de código. 
Cuando el trabajo se subcontrata a un contratista externo, que tiene un conjunto de estas buenas prácticas en el lugar que 
da el saber que el código producido por el contratista cumple con todos los lineamientos establecidos por la empresa cliente.
Se debe entender que estas prácticas no son sólo una forma de hacer cumplir las convenciones de nombres en el código.
Las buenas prácticas de codificación le ofrece una manera de analizar el código fuente, de manera que ciertas reglas y 
patrones se pueden detectar de forma automática y que el conocimiento obtenido a través de los años anteriores de la 
experiencia de los expertos de la industria se lleva a cabo de una manera adecuada.

Con lo anterior en mente, he aquí una cierta etapa de la base de lo que se necesita para un proyecto que utiliza con éxito 
'Buenas Prácticas' de Codificación:

## Comentario

Debido a restricciones de tiempo o programadores entusiastas que quieren resultados inmediatos de su código, comentar el
código amenudo pasa a un segundo plano. Los programadores que trabajan en equipo han encontrado que es mejor dejar
comentarios luego de haber codificacdo algunas lineas, asi más de una persona puede trabajar en un módulo en particular. 
Por lo tanto, se hizo una _"buena práctica"_ dejar comentarios luego del código.

Una práctica comentando es dejar una breve descripción de lo siguiente:
	* Nombre del módulo.
	* Objetivo del módulo.
	* Descripción del módulo (breve).
	* Autor Original.
	* Modificaciones.
	* Los autores que modifican el código con una descripción de por qué se ha modificado.

También con respecto a la lógica complicada que se utiliza, es una buena idea colocar un "bloque" de comentario para que otro
programador puede entender qué es exactamente lo que está sucediendo.

## Objetivo del Código

Otra buena práctica es conocer el objetivo del código. 
Nunca comenzar la codificación sin entender por qué el código se escribe y para que está siendo escrito.

Preguntas que debe hacerse mientras se codifica:
	1. ¿Es esta una pequeña función que nunca será reemplazado?
	2. ¿Habrá alguna modificación a esta función?

Sobre todo, hay funciones que recuperan las fechas del sistema y muestran a los usuarios en sus páginas web, las funciones
normalmente no necesitan reemplazo o modificaciones. Sin embargo, en proyectos complejos, hay un montón de cosas que pueden
requerir modificación o adición o eliminación. Por lo tanto siempre documentar el código a medida que se modifica de modo 
que el objetivo del código es claro en todos los pasos.