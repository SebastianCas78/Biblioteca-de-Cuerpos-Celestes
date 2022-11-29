# Biblioteca de Cuerpos Celestes
## Contexto
La administración correcta y segura de la información siempre ha sido uno de los principales objetivos de cualquier empleado de alguna rama de la ciencia, teniendo esto en cuenta decidí orientar mi programa al campo astronómico. 
<br>Estoy creando una base de datos que permitirá a los usuarios consultar las características de los distintos cuerpos celestes conocidos por el ser humano para asi poder identificarlos adecuadamente.<br>
Algunos de los parámetros que decidí tener en cuenta para su clasificación son:<br> 
1) El tamaño del mismo ya que puede variar demasiado, desde cuerpos tan pequeños como una pelota de golf hasta cuerpos cientos de veces más grandes que nuestro sol.<br>
2) Su brillo, ya que este puede dar mucha información sobre su distancia, su edad y el papel que juega en el universo.<br>
3) De la misma manera su ubicación es otro punto muy importante a tener en cuenta a la hora de clasificarlo como uno de los tipos de cuerpos celestes existentes ya que con ella podemos obtener información de que efectos tiene sobre su entorno.<br>
<br>Adicionalmente la biblioteca contará con la opción de agregar sugerencias de nueva información que los usuarios quieran aportar para enriquecer la plataforma; desde luego estas sugerencias seran analizadas para corroborar su vericidad y así evitar agregar información errónea que fomente la desinformación.
<br>

## Explicación

Este es un proyecto que estoy creando con el lenguaje de programación C++ con la finalidad de ayudar a todos los observadores espaciales a identificar y clasificar que tipo de cuerpo celeste estan viendo, esto en base a las características de cada tipo de cuerpo celeste registradas en la biblioteca.

## Funcionamiento

Al poner en marcha el código esté en un principio te dará la bienvenida y te pedirá que respondas tres preguntas que forman parte de la clase padre, una vez respondidas estas preguntas las respuestas dadas serán almacenadas y heredadas a tres clases (Asteroide, Cometa y Planeta).
Posteriormente el programa te preguntará si quieres continuar y en caso de que así sea te pedirá que decidas cual es la clase a la que le ingresaran los datos; dependiendo de la clase elegida se te solicitará cierta información que será almacenada en otra clase que se encargará de imprimir toda la información agregada al finalizar la consulta del código.

## Limitaciones
Debido a limitantes de tiempo el código tuvo que ser reducido a seis clases sin contar el main; significando esto que las opciones de impresión de información fueron reducidas.
Únicamente se puede elegir llenar la información de tres Cuerpos Celestes (Asteroide, Cometa y Planeta) aunque también se puede ingresar información de las lunas que puede tener un planeta, siendo esta la relación de agregación del código y de momento su única subclase.
Sin embargo la base del código ya está lista y esta será mejorada con el paso del tiempo conforme aprenda más del lenguaje de programación, esto para aumentar la capacidad de información que puede ser obtenida.

## Diagrama draw.io

https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1#G17z64eCX9i4GjkJCEIm66m8x8ixInID9n
