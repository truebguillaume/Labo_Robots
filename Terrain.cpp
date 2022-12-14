//
// Created by Guillaume Trüeb on 12.12.22.
//

#include "Terrain.h"

using namespace std;

void Terrain::afficher() {

    for(unsigned i = 0 ; i <= this->largeur ; ++i)
        cout << "-";

    cout << endl;
    for(unsigned i = 1 ; i < this->hauteur ; ++i){
        cout << "|";
        for(unsigned j = 1 ; j < this->largeur ; ++j){
            cout << " ";
        }
        cout << "|" << endl;
    }

    for(unsigned i = 0 ; i <= this->largeur ; ++i)
        cout << "-";

    cout << endl;
}