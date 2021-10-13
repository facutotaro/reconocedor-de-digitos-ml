#pragma once

#include "types.h"

using namespace std;

class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(Matrix X, Matrix y);

    Vector predict(Matrix X);

    vector<pair<double,int>> buscarMasCercanos(vector<pair<double,int>> &distancias);

private:
    unsigned int n_neighbors_;
    Matrix digits_;
    Matrix etiquetas_;

    bool comp(int i, int j);
};
