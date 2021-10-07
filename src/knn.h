#pragma once

#include "types.h"


class KNNClassifier {
public:
    KNNClassifier(unsigned int n_neighbors);

    void fit(Matrix X, Matrix y);

    Vector predict(Matrix X);
private:
    unsigned int n_neighbors_;
    Matrix digits_;
    Matrix etiquetas_;

    bool comp(int i, int j);
    
};
