# Calidad de resultados segun k y alpha

En este bloque de experimentacion se van analizar la calidad de los resultados obtenidos de la utilización de los metodos "KNN" y "KNN con PCA", variando los paramentos k, la cantidad de vecinos a tomar en cuenta en KNN, y alpha, la cantidad de componentes principales a tomar en cuenta en PCA.

El objetivo final es obtener los valores k y alpha que maximicen el accuracy de nuestro modelo, haciendolo a su vez preciso y robusto, y en un tiempo de entrenamiento aceptable.

## KNN (sin PCA)

Para este experimento se va a entrenar el modelo con un k igual a 1, 5, 10, 20, 50, 100, 200, 500 y 1000. Por simplicidad de la experimentacion, de los 42000 datos dados, siempre se va a utilizar un 80% para entrenamiento y 20% para validación.