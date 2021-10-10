#include <algorithm>
//#include <chrono>
#include <iostream>
#include "knn.h"

using namespace std;


KNNClassifier::KNNClassifier(unsigned int n_neighbors)
{
    n_neighbors_ = n_neighbors;
}

void KNNClassifier::fit(Matrix X, Matrix y)
{
    digits_ = X;
    etiquetas_ = y;
}

Vector KNNClassifier::predict(Matrix X)
{
    // Creamos vector columna a devolver
    auto ret = Vector(X.rows());

    vector<pair<double, int>> distancias(digits_.rows()); 
    for (unsigned k = 0; k < X.rows(); ++k)
    {   
        for(int i = 0; i < digits_.rows();i++){
            Vector v = X.row(k) - digits_.row(i); 
            distancias[i] = {v.squaredNorm(), etiquetas_(i)};
        }


        nth_element(distancias.begin(), distancias.begin()+n_neighbors_, distancias.end());

        // Cuento las etiquetas de los vecinos mas cercanos
        vector<int> res(10, 0);
        for(unsigned int j = 0; j < n_neighbors_; j++){
            res[distancias[j].second]++;
        }

        // Me quedo con la etiqueta que mas aparezca
        int max = 0;
        for(int l = 0; l < 10;l++){
            max = (res[max] < res[l]) ? l : max;
        }

        ret(k) = max;
    }

    return ret;
}

void KNNClassifier::insertarHasta(vector<pair<double, int>> &dist, int n)
{
    int min;
    pair<double, int> aux;
    for(int i = 0; i < n; i++){
        // Encuentro el minimo
        min = i;
        for(long unsigned int j = i; j < dist.size(); j++){
            if(dist[j].first < dist[min].first){
                min = j;
            }
        }
        // Inserto el minimo
        for(int j = min; j > 0 && dist[j-1].first > dist[j].first; j--){
            aux = dist[j];
            dist[j] = dist[j-1];
            dist[j-1] = aux;
        }
    }
}