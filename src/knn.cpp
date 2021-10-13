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

        vector<int> res(10, 0);
        for(unsigned int j = 0; j < n_neighbors_; j++){
            res[distancias[j].second]++;
        }

        int max = 0;
        for(int l = 0; l < 10;l++){
            max = (res[max] < res[l]) ? l : max;
        }


        ret(k) = max;
    }

    return ret;
}
