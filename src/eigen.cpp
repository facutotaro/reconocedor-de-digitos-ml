#include <algorithm>
#include <chrono>
#include <iostream>
#include "eigen.h"

using namespace std;


pair<double, Vector> power_iteration(const Matrix& X, unsigned num_iter, double eps)
{
    Vector b = Vector::Random(X.cols());
    double eigenvalue;
    /***********************
     * COMPLETAR CODIGO
     **********************/
    for (int i = 2; i <= num_iter; i++) { b = X*b; }  // Aproximar al autovector
    eigenvalue = b.dot(X*b) / b.dot(b);               // Calcular a su autovalor
    /**/

    return make_pair(eigenvalue, b / b.norm());
}

pair<Vector, Matrix> get_first_eigenvalues(const Matrix& X, unsigned num, unsigned num_iter, double epsilon)
{
    Matrix A(X);
    Vector eigvalues(num);
    Matrix eigvectors(A.rows(), num);

    /***********************
     * COMPLETAR CODIGO
     **********************/
    for (int i = 0; i < num; i++) {
      double eigvalue; Vector eigvector;
      tie(eigvectors(i), eigvector) = power_iteration(A);  // Obtener componente
      A -= eigvalue*eigvector.transpose()*eigvector;  // Deflacionar a la matriz
      eigvectors.col(i) = eigvector;
    }
    /**/

    return make_pair(eigvalues, eigvectors);
}
