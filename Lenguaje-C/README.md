# Buenas Practicas

Una __buena práctica__ es un método o técnica que ha demostrado consistentemente resultados superiores a los obtenidos con
otros medios, y que se utiliza como punto de referencia. Además, una "buena" práctica puede llegar a convertirse en una 
mejor medida para descubrir mejoras. Buena práctica es considerada por algunos como una palabra de moda de negocios, 
que se utiliza para describir el proceso de desarrollo y seguimiento de una forma estándar de hacer las cosas que 
múltiples organizaciones pueden utilizar.

# Buenas Practicas de Codificacion

Las __buenas prácticas de codificación__ son un conjunto de reglas informales que la comunidad de desarrollo de software 
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
__"Buenas Prácticas"__ de Codificación:

## Comentario

Debido a restricciones de tiempo o programadores entusiastas que quieren resultados inmediatos de su código, comentar el
código amenudo pasa a un segundo plano. Los programadores que trabajan en equipo han encontrado que es mejor dejar
comentarios luego de haber codificacdo algunas lineas, asi más de una persona puede trabajar en un módulo en particular. 
Por lo tanto, se hizo una __"buena práctica"__ dejar comentarios luego del código.

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

Otra __buena práctica__ es conocer el objetivo del código. 
Nunca comenzar la codificación sin entender por qué el código se escribe y para que está siendo escrito.

Preguntas que debe hacerse mientras se codifica:
	1. ¿Es esta una pequeña función que nunca será reemplazado?
	2. ¿Habrá alguna modificación a esta función?

Sobre todo, hay funciones que recuperan las fechas del sistema y muestran a los usuarios en sus páginas web, las funciones
normalmente no necesitan reemplazo o modificaciones. Sin embargo, en proyectos complejos, hay un montón de cosas que pueden
requerir modificación o adición o eliminación. Por lo tanto siempre documentar el código a medida que se modifica de modo 
que el objetivo del código es claro en todos los pasos.

## Depurar el código y corrección de errores

Los programadores tienden a escribir el código completo y luego comenzar la depuración y comprobación de errores. 
Aunque este enfoque puede ahorrar tiempo en los proyectos más pequeños, en proyectos más grandes y más complejos tienden 
a tener demasiadas variables y funciones que requieren atención. Por lo tanto, es bueno para depurar todos los módulos 
una vez que haya terminado, y no todo el programa. Esto permite ahorrar tiempo a largo plazo por lo que no se termina 
perdiendo mucho tiempo en averiguar lo que está mal.

## Portabilidad

El código del programa no debe nunca contener __"no modificable"__, es decir, literalmente, los valores se refieren 
a parámetros ambientales, tales como rutas absolutas de archivos, nombres de archivos, nombres de usuario, nombres de host,
direcciones IP, direcciones URL, puertos UDP/TCP. De lo contrario la aplicación no se ejecuta en un host que tiene un diseño
diferente de lo previsto. Tales variables que deben parametrizar y configurar el entorno de alojamiento fuera de la 
aplicación correcta (por ejemplo, archivos de propiedades, servidor de aplicaciones, o incluso una base de datos).

Como extensión, recursos tales como archivos XML también deben contener variables en lugar de valores literales, 
de lo contrario la aplicación no será portable a otros entornos sin necesidad de editar los archivos XML. 
Por ejemplo, con aplicaciones <a href="http://es.wikipedia.org/wiki/Java_EE">J2EE</a> que se ejecutan en un servidor 
de aplicaciones, tales parámetros ambientales se pueden definir en el ámbito de aplicación de la 
<a href="http://es.wikipedia.org/wiki/M%C3%A1quina_virtual_Java">JVM</a> y la aplicación deben obtener los valores desde allí.

