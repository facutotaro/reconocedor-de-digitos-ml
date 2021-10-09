#pragma once

#include "types.h"

using namespace std;

class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(Matrix X, Matrix y);

    Vector predict(Matrix X);

    void insertarHasta(vector<pair<double, int>> &dist, int n);

private:
    unsigned int n_neighbors_;
    Matrix digits_;
    Matrix etiquetas_;

    bool comp(int i, int j);
};
