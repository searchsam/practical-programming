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

## Convenciones de nombres

El uso de las convenciones de nombres propios se considera una __buena práctica__. A veces los programadores suelen usar 
X1, Y1, etc., como nombre de variables y se olvidan de sustituirlos por otros mas significativos, causando confusión.

Para evitar esta pérdida de tiempo, por lo general se considera __buena práctica__ usar nombres descriptivos 
en el código ya que tratamos con datos reales.

Ejemplo: Una variable para la toma de peso como un parámetro para un camión puede ser nombrado TrkWeight o TruckWeight, 
con TruckWeight siendo la más preferible, ya que es fácilmente reconocible. 

> Ver <a href="http://es.wikipedia.org/wiki/M%C3%A1quina_virtual_Java">CamelCase</a> denominación de variables.

## Mantenga el código simple

El código que un programador escribe debe ser simple. 
La lógica complicada para resolver una cosa simple debe mantenerse a un mínimo, ya que el código puede ser modificado 
por otro programador en el futuro. La lógica implementada por el programador  puede no tener sentido a otro. 
Por lo tanto, siempre mantener el código lo más simple posible.

## Directrices breves

Una visión general de todo lo anterior:

	1. Sepa lo que el bloque de código debe realizar.
	2. Indicar una breve descripción de lo que una variable es de (referencia a comentar).
	3. Corregir los errores que se producen.
	4. Mantenga su código simple.
	5. Mantener las convenciones de nomenclatura que son uniformes en todas partes.

## Ciclo de Vida

Es importante elegir el ciclo de vida de desarrollo adecuado para un proyecto dado, porque todas las demás actividades 
se derivan de este proceso. Un par de ejemplos de esto son el 
<a href="http://en.wikipedia.org/wiki/IBM_Rational_Unified_Process">Rational Unified Process (RUP)</a> y los métodos 
de <a href="http://es.wikipedia.org/wiki/Programaci%C3%B3n_extrema">Extreme Programming (XP)</a>. 
Tener un proceso bien definido es generalmente mejor que no tener ninguno en absoluto, y en muchos casos no es tan
importante qué proceso se utiliza a lo bien que se ejecuta. Los métodos anteriores son muy comunes y una búsqueda rápida 
de información sobre como ponerla en práctica.

## Requerimientos

> Artículo principal: <a href="http://en.wikipedia.org/wiki/Requirements_engineering">Ingeniería de Requisitos</a>.

Todo el mundo tiene que estar en la misma página antes de saltar a la programación. 
Esta es una verdad fundamental para casi cualquier empresa, y más aún cuando el cumplimiento de una tarea de programación 
impulsada por grupo. Si está programando solo, puede que te encuentres añadiendo o modificando su aplicación. 
Si usted está realizando una aplicacion empresarial, todos los que participan en el proyecto debe 
comprender claramente los requisitos y los objetivos del proyecto antes de seguir adelante. 
Esto es conocido como especificaciones funcionales y detalladas.

## Arquitectura

> Artículo principal: <a href="http://en.wikipedia.org/wiki/Software_architecture">Arquitectura de Software</a>.

La elección de la arquitectura adecuada para su aplicación es la clave. Usted tiene que saber lo que se está construyendo 
antes de empezar un proyecto. Revise la arquitectura del objetivo. 
Lea lo más que pueda acerca de los pormenores de la plataforma y observar cualquier dificultad antes de empezar su código.
Sera un largo camino antes de que cualquier error que pudiera ser __"razon para desistir"__ en el futuro.

## Diseño

> Artículo principal: <a href="http://en.wikipedia.org/wiki/Software_design">Diseño de Software</a>.

Incluso si se siente muy bien acerca de conocer la arquitectura de la plataforma de destino sin un buen diseño 
va a ser hundido. Trate de no caer en la trampa, de un exceso de diseño en la aplicación. 
Los dos principios básicos son __<a href="http://en.wikipedia.org/wiki/KISS_principle">"Mantenlo Simple"</a>__ 
y utilizar la ocultamiento de información (no muestra al usuario más de lo que necesitan para ver). 
A menudo esto es donde el 
<a href="http://es.wikipedia.org/wiki/An%C3%A1lisis_y_dise%C3%B1o_orientado_a_objetos">Análisis Orientado a Objetos</a> y 
<a href="http://es.wikipedia.org/wiki/Lenguaje_Unificado_de_Modelado">UML</a> 
aparecen. Haga una búsqueda sobre <a href="http://es.wikipedia.org/wiki/Lenguaje_Unificado_de_Modelado">UML</a> 
y encontrará docena de artículos sobre su uso.

## Contruir Código

La construccion del código es realmente sólo una pequeña parte del esfuerzo total del proyecto, a pesar de que es lo que la
mayoría de la gente equipara con todo el proceso, ya que es lo más visible. Otras piezas tanto o más importantes son lo que 
ya hemos visto anteriormente requisitos, a saber, la arquitectura, el análisis, diseño y pruebas. Una buena práctica para la
construccion de código implica construcciones y pruebas diarias.

Una mejor codificación evoluciona de seguir las normas y directrices de codificación adecuadas. Comentarios apropiados para
cada línea de código hace el mantenimiento del código mucho más fácil. Un buen código poseer componentes reutilizable.
Acontinuacion una breve descripción de los puntos antes mencionados.

## Pruebas

Artículo principal: <a href="http://en.wikipedia.org/wiki/Software_testing">Pruebas de Software</a>.

Las pruebas son una parte integral del desarrollo de software que necesita ser planificada. 
También es importante que la prueba se realiza de forma proactiva, lo que significa que se han previsto los casos de prueba
se inicia antes de la codificación, y los casos de prueba se desarrollan mientras la aplicación está siendo diseñado y 
codificado.

## Implementación

Artículo principal: <a href="http://en.wikipedia.org/wiki/Software_deployment">Implementación de Software</a>

La implementación es la etapa final de la liberación de una aplicación para los usuarios.