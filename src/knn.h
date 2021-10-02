#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(Matrix &X, Vector &y); //Const? Referencia?

    Vector predict(Matrix X);
private:
    unsigned int n_neighbors_;
    Matrix digits_;
    Vector labels_;
    //Calcula la distancia al cuadrado entre dos vectores
    double squareDistance(Vector v1, Vector v2);
    //Encuentra los K Vecinos más cercanos
    Vector bestK(Vector v);
    //Ordena los arreglos con el mismo ordenamiento
    void sortVectors(Vector &dist, Vector &res);
    void swap(Vector &v1, unsigned int i, unsigned int j);
    //Devuelve la moda estadistica de un vector
    int mode(Vector &v1);
};
