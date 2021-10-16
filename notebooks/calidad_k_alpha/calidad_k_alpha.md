# Calidad de resultados segun k y alpha

En este bloque de experimentacion se van analizar la calidad de los resultados obtenidos de la utilización de los metodos "KNN (sin PCA)" y "KNN con PCA", variando los paramentos k, la cantidad de vecinos a tomar en cuenta en KNN, y alpha, la cantidad de componentes principales a tomar en cuenta en PCA.

El objetivo final es obtener los valores k y alpha que maximicen el accuracy de nuestro modelo, haciendolo a su vez preciso y robusto, y en un tiempo de entrenamiento aceptable.

## KNN (sin PCA)

Para este experimento se va a entrenar el modelo con un k igual a 1, 2, 5, 10, 20, 50, 100. Por simplicidad de la experimentacion, de los 42000 datos dados, siempre se van a utilizar un 80% para entrenamiento y un 20% para validación. Para evaluar los resultados utilizaremos las metricas de accuracy, precision y recall, y mediremos los tiempos de ejecucion.

Hipotesis: 

Creemos que a medida que el parametro k se incremente, las metricas van a resultar en valores mas favorables (cercanos a 1), ya que se cuenta con mas informacion, y los tiempos de ejecucion se van a incrementar de manera lineal, ya que se debe aumentar la cantidad de vecinos a evaluar por cada nuevo dato a clasificar.

Resultados: 

Como se observa en los graficos de las metricas según la cantidad de vecinos, y contradiciendo nuestra hipotesis, las mismas llegan a un valor maximo con un k = 1 y decrementan a partir de k = 5. Creemos que esto es a causa de que si uno tomase un k igual a la cantidad de datos en la muestra, la prediccion seria siempre la misma sin importar la imagen que se quiera predecir, y si uno tomase un k igual a 1 podria resultar ser poca informacion. Por lo tanto el k que maximiza las metricas debe ser uno intermedio, el cual en este caso en particular basto con k = 1.

Luego en el segundo grafico podemos obsevar como los tiempos de ejecucion aumentan de manera aparentemente lineal a medida que aumenta el k, apoyando nuestra hipotesis inicial.

## KNN con PCA

Para este experimento se va a entrenar el modelo con un k igual a 1, 2, 5, 10, 20, 50, 100 y alpha 1, 5, 10, 50, 100. Por simplicidad de la experimentacion, de los 42000 datos dados, siempre se van a utilizar un 80% para entrenamiento y un 20% para validación. Para evaluar los resultados utilizaremos las metricas de accuracy, precision y recall, y mediremos los tiempos de ejecucion.

Hipotesis: 

Creemos que a medida que los parametros k y alpha se incrementen, las metricas van a resultar en valores mas favorables (cercanos a 1), ya que se cuenta con mas informacion, y los tiempos de ejecucion se van a incrementar respecto de k y alpha, ya que se debe aumentar la cantidad de vecinos a evaluar por cada nuevo dato a clasificar junto con la cantidad de componentes a analizar.

Resultados:

Como se observa en los graficos de las metricas según la cantidad de vecinos y cantidad de componentes, a excepcion del caso de alpha = 1, las metricas segun k crecen hasta un maximo y luego decrecen. Creemos que esto ocurre por el mismo motivo que en KNN sin PCA, con la diferencia de que el valor optimo de k es mayor a 1 para los alphas estudiados. Razonando sobre lo anterior sospechamos que este comportamiento se replica en alpha = 1 pero con una mayor cantidad de vecinos.

Despues podemos observar que siempre se da una mejora de las metricas a medida que alpha incrementa, apoyando nuestra hipotesis.

Finalmente en el segundo grafico podemos obsevar como los tiempos de ejecucion aumentan a medida que aumenta el k y el alpha, apoyando nuestra hipotesis inicial.

## Conclusion

Los valores optimos para los parametros de entrada son un alpha lo mas grande posible (784) con un k que maximize las metricas. Creemos que dicho k debe ser menor a 5 ya que se observa que el valor de k que maximiza las metricas es cada vez menor a medida que se aumenta el alpha.

Si ademas tomamos en cuenta los tiempos de ejecucion, uno podria optar por un alpha mucho mas chico que el maximo, ya que la mejora en las metricas es pequeña comparado su costo temporal cuando el valor de alpha es muy grande. Luego por ejemplo convendria tomar alpha = 10 y el k = 10 que maximiza las metricas y se calcula en un tiempo de 16 segundos (predecir sobre 0.2x42000 = 8400 imagenes) obteniendo un accuracy, precision y recall de alrededor de 0.9, o tambien se podria tomar alpha = 50, k = 10, teniendo un tiempo de procesamiento mayor sobre la misma cantidad de imagenes de 24 segundos pero obteniendo metricas de alrededor de 0.96.