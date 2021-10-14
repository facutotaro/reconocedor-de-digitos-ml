import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# Lee contenido csv
csv_name = "accuracy.csv" # csv file name
# crea un dataframe (df) a partir del archivo
# el csv accuracy.csv esta separa por espacios => sep = " "
df = pd.read_csv(csv_name, sep = " ", dtype = float)

# Transformo a numpy arrays
# arreglo de arreglos numpy 
# con mismo orden que el contenido del csv
# sin indice de columna o fila
np_matrix = df.iloc[:,1:].to_numpy()
# nombres de filas (indices)
yticks = df["Vecinos vs porcentaje"].to_numpy()
# nombres de columnas
xticks = df.columns[1:].to_numpy()

plt.figure(figsize = (8,5))

plt.imshow(np_matrix, cmap = "hot")
plt.colorbar()
plt.yticks(ticks = np.arange(len(yticks))+0.5, 
	       labels = list(map(lambda x: str(x), yticks)),
	       fontsize = 5)
plt.xticks(ticks = np.arange(len(xticks))+0.5, 
	       labels = list(map(lambda x: str(x), xticks)),
	       fontsize = 5)
plt.title("Titulo", 
	      fontsize = 18)
plt.ylabel("Titulo Y", fontsize = 15)
plt.xlabel("Titulo X", fontsize = 15)
plt.show()