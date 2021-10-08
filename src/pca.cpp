#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;


PCA::PCA(unsigned int n_components)
{
    _n_components = n_components;
}

void PCA::fit(Matrix X)
{
    // Pre: X es una matriz de n muestras por 784 columnas
    //      que representan cada imagen

    //X_u = (X - medias)/raiz(n-1)
    _mean = X.colwise().mean();
    _n = X.rows();

    Matrix X_u = (X.rowwise() - _mean.transpose())/sqrt(_n-1);

    // Calculo matriz de Covarianza M_x_u
    Matrix M_x_u = X_u.transpose() * X_u;

    // Guardo matriz P = V^t de autovectores de M_x_u
    // Siendo P la matriz cambio de base

    _P = (get_first_eigenvalues(M_x_u, _n_components)).second;

}


MatrixXd PCA::transform(Matrix X)
{
    // Pre: X es una matriz de n muestras por 784 columnas
    //      que representan cada imagen

    // X^ = (X - medias(del fit)) /raiz(n-1)(del fit)
    Matrix X_u = (X.rowwise() - _mean.transpose())/sqrt(_n-1);

    // X_p = P.X_^
    Matrix X_p = X_u * _P;

    return X_p; // X_p = X_p_t.transpose()

    //X_p_t = P * X_t
    //X_p = X * P_t
    // X_p = n*alpha, P = 784 * alpha, X = n* 748
    // X * P_t = n * alpha
}
