//
// Created by pachi on 5/6/19.
//

#include <iostream>
#include "pca.h"
#include "eigen.h"

using namespace std;

int main(int argc, char** argv){

    PCA pca(2);

    Matrix X(3,4);

    X(0,0) = 1;
    X(0,1) = 2;
    X(0,2) = 3;
    X(0,3) = 4;

    X(1,0) = 4;
    X(1,1) = 3;
    X(1,2) = 2;
    X(1,3) = 1;

    X(2,0) = 0;
    X(2,1) = 1;
    X(2,2) = 2;
    X(2,3) = 3;

    pca.fit(X);
    Matrix X_trans = pca.transform(X);

    cout << X_trans << endl;

  return 0;
}
