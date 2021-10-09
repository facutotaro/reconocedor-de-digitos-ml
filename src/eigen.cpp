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
    for (unsigned i = 1; i <= num_iter; i++) {
      Vector c = (X*b).normalized();     // Aproximar hacia autovector principal
      double angulo = b.transpose() * c;
      b = c;
      if (1-eps < angulo) break;      // No iterar si no varía
      //if ((b-c).isApproxToConstant(0, eps)) break;      // No iterar si no varía
    } 
    eigenvalue = b.dot(X*b);                   // Calcular el autovalor asociado
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
    for (unsigned i = 0; i < num; i++) {
      double eigvalue; Vector eigvector;
      tie(eigvalue, eigvector) = power_iteration(A, num_iter, epsilon);  // Obtener componente
      A -= eigvalue*eigvector*eigvector.transpose();  // Deflacionar a la matriz
      eigvectors.col(i) = eigvector;
      eigvalues(i) = eigvalue;
    }
    /**/

    return make_pair(eigvalues, eigvectors);
}
