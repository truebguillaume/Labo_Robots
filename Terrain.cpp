//
// Created by Guillaume Trüeb on 12.12.22.
//

#include "Terrain.h"

using namespace std;

void Terrain::afficher(const vector<Robots>& vecRobots) {

    for(unsigned k = 0 ; k <= this->largeur+1 ; ++k)
        cout << "-";

    cout << endl;
    for(unsigned i = 1 ; i <= this->hauteur ; ++i){
        cout << "|";
        for(unsigned j = 1 ; j <= this->largeur ; ++j){
            //auto it = find_if(vecRobots.begin(),vecRobots.end(),Robots::positionDUnRobots());
            string sortie = " ";
            bool aRobots = false;
            for(const Robots& r : vecRobots)
            {
                if(r.getPosLargeur() == j && r.getPosHauteur() == i)
                {
                    aRobots = true;
                    sortie = to_string(r.getID());
                }
            }
            if(aRobots)
                cout << sortie;
            else
                cout << " ";
        }
        cout << "|" << endl;
    }
    for(unsigned i = 0 ; i <= this->largeur + 1; ++i)
        cout << "-";

    cout << endl;
}