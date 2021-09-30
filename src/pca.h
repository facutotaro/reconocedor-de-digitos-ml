#pragma once
#include "types.h"

class PCA {
public:
    PCA(unsigned int n_components); // constructor de clase PCA

    // Calcula transformacion PCA dada una muestra
    void fit(Matrix X);

    // Realiza transformacion PCA de una imagen dada
    Eigen::MatrixXd transform(Matrix X);
private:

    Eigen::VectorXd _mean; // media de la muestra
    int _n; // cantidad de imagenes en la muestra
    Eigen::MatrixXd _P; // matriz de cambio de base

};
