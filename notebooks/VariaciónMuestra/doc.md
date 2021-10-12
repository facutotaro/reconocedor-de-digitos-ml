# Variación de cantidad de imagenes en muestra

Buscamos ver la relación entre la cantidad de imagen en la muestra y la calidad de los resultados del kNN.
Con muy pocas imagenes el kNN quizá no es tan preciso y con gran cantidad de imagenes se estabilizara el resultado, es decir, a partir de cierta cantidad de imagenes, por más que sigamos agregando imagenes, la calidad del resultado no se modificara significativamente.

Para ver esto se harán 2 experimentos:
- Tomando porcentajes de la muestra total, empezando con 10% y terminando con 100%
- Empezando con 500 imagenes, sumandole 500 en cada vez hasta llegar a el total de la muestra.

En cada experimento se usará k=5 y alpha=40.

## Experimento 1: Tomando porcentajes.

Tomaremos primero el 10% de muestras y luego vamos a ir sumando el 10% de la muestra cada vez, es decir, vamos a tomar primero 10%, luego 20% y así hasta llegar a 100%

### Calidad de datos:

[Gráfico de Metricas]

Vemos como del 10% al 30% la mejora es muy significativa, luego tiene muchas variaciones y al llegar al 70% se estabiliza y no varía tanto en el resto de los porcentajes.
Con el 70% (23519 instancias de entrenamiento y 5880 de validación) obtenemos un accuracy de 0.9565 y con el 100% obtenemos uno de 0.9594. Tenemos una mejora del Accuracy de solo el 0.002942 y tardamos 6 segundos más en calcularlo, es decir, el costo que pagamos en tiempo no lo ganamos en calidad.

El accuracy y la precisión tiene valores MUY similares.

Los máximos valores de accuracy y precisión se obtienen con el 100% de la muestra total pero, como dijimos antes, varían muy poco con los resultados obtenidos con el 70% de la muestra total.


### Tiempo de ejecución:

[Gráfico de tiempo]

En todos los casos, más grande es la muestra, más tiempo se tarda en procesarla. En promedio, se tarda entre 1 y 2 segundos con cada 10% (3360 instancias de entrenamiento y 840 de validación) de la muestra.

## Experimento 2: aumentamos de a 500 imagenes.

Tomaremos 500 imagenes y luego iremos ampliando la muestra sumandole 500 imagenes en cada iteración hasta llegar al total de la muestra con 42000 imagenes.

### Calidad de datos:

[Gráfico de Métricas]

Vemos que tiene una mejora significativa de la calidad entre las 500 y las 3500 fotos, donde alcanza un máximo local de 0.9428. Luego tiene muchas variaciones y se estabiliza cuando llega a las 20000 imagenes aproximadamente.
A las 20000 imagenes se alcanza un accuracy de 0.9528 que es 0.01130 menor al accuracy máximo (0.9640) que se alcanza con 42000 imagenes (muestra completa).

### Tiempo de ejecución:

[Gráfico de tiempo]

A diferencia del experimento anterior donde el tiempo de cada iteración siempre era mayor al tener mayor cantidad de imágenes, acá podemos ver una gran variación de los tiempos de ejecución pero siempre tendiendo a mayor tiempo cada vez. 

