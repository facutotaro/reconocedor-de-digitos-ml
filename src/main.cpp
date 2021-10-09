//
// Created by pachi on 5/6/19.
//

#include <iostream>
#include "knn.h"
#include "pca.h"
#include "eigen.h"

using namespace std;

int main(int argc, char** argv){

    KNNClassifier clf = KNNClassifier(5);

    vector<pair<double, int>> dist(10,make_pair(0,0));

    // 10, 9, 3, 5, 2, 7, 8, 1, 0, 10

    dist[0].first = 10;
    dist[0].second = 0;

    dist[1].first = 9;
    dist[1].second = 0;

    dist[2].first = 3;
    dist[2].second = 0;

    dist[3].first = 5;
    dist[3].second = 0;

    dist[4].first = 2;
    dist[4].second = 0;

    dist[5].first = 7;
    dist[5].second = 0;

    dist[6].first = 8;
    dist[6].second = 0;

    dist[7].first = 1;
    dist[7].second = 0;

    dist[8].first = 0;
    dist[8].second = 0;

    dist[9].first = 10;
    dist[9].second = 0;

    clf.insertarHasta(dist, 3);

    for(long unsigned int i = 0; i < dist.size(); i++){
        cout << dist[i].first << endl;
    }

  return 0;
}
