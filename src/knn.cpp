#include <algorithm>
//#include <chrono>
#include <iostream>
#include "knn.h"

using namespace std;

KNNClassifier::KNNClassifier(unsigned int n_neighbors)
{
    this->n_neighbors_ = n_neighbors;
}

void KNNClassifier::fit(Matrix &X, Vector &y)
{
    this->digits_ = X;
    this->labels_ = y;
}

Vector KNNClassifier::predict(Matrix X)
{
    // Creamos vector columna a devolver
    auto ret = Vector(X.rows());

    for (unsigned k = 0; k < X.rows(); ++k)
    {
        Vector res = bestK(X.row(k));
        ret(k) = mode(res);
    }
    return ret;
}

double KNNClassifier::squareDistance(Vector v1, Vector v2)
{
    return (v1 - v2).squaredNorm();
}

Vector KNNClassifier::bestK(Vector v)
{
    auto dist = Vector(n_neighbors_);
    auto res = Vector(n_neighbors_);
    for (unsigned int i = 0; i < n_neighbors_; i++)
    {
        dist(i) = squareDistance(v, digits_.row(i));
        res(i) = labels_(i);
    }
    // Ordeno los primeros k vectores(Uso insertion porque es estable);
    sortVectors(dist, res);
    for (int i = n_neighbors_; i < digits_.rows(); i++)
    {
        // En caso de que aparezca un nuevo con menor distancia que el mas lejano de los vecinos,
        // lo inserto(uso insertion porque para listas ordenadas es el menos costoso)
        double distance = squareDistance(v, digits_.row(i));
        if (distance < dist(n_neighbors_ - 1))
        {
            dist(n_neighbors_ - 1) = distance;
            res(n_neighbors_ - 1) = labels_(i);
            for (int j = n_neighbors_ - 2; j >= 0 && dist(j) > distance; j--)
            {
                swap(dist, j, j + 1);
                swap(res, j, j + 1);
            }
        }
    }

    return res;
}

void KNNClassifier::sortVectors(Vector &dist, Vector &res)
{
    for (int i = 0; i < dist.size(); i++)
    {
        for (int j = i; j > 0 && dist(j) < dist(j); j--)
        {
            swap(dist, j, j - 1);
            swap(res, j, j - 1);
        }
    }
}

void KNNClassifier::swap(Vector &v1, unsigned int i, unsigned int j)
{
    auto aux = v1(i);
    v1(i) = v1(j);
    v1(j) = aux;
}

int KNNClassifier::mode(Vector &v1)
{
    auto aux = Vector(10);
    for (int i = 0; i < v1.size(); i++)
    {
        aux(int(v1(i))) += 1;
    }
    int maxIndex = 0;
    int maxCount = aux(0);
    for (int i = 0; i < 10; i++)
    {
        if (aux(i)>maxCount)
        {
            maxIndex = i;
            maxCount = aux(i);
        }
    }
    return maxIndex;

}
