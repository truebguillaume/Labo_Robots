// ---------------------------------------------------------------------------------
// Fichier        : Terrain.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 12 décembre 2022
// But            : Ce programme représente la méthode afficher pour l'affichage
//                  de la zone de combat et des robots
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#include "Terrain.h"

using namespace std;

// Constante pour l'affichage
const string LIMITELARGEUR = "-";
const string LIMITEHAUTEUR = "|";
const string VIDE          = " ";

// Méthode permettant d'afficher le terrain et le vecteur de robots
void Terrain::afficher(const vector<Robots>& vecRobots) {

   // Affichage des limites supérieur
    for(unsigned k = 0 ; k <= this->largeur+1 ; ++k)
        cout << LIMITELARGEUR;
    cout << endl;

    for(unsigned i = 1 ; i <= this->hauteur ; ++i){
        cout << LIMITEHAUTEUR;

        for(unsigned j = 1 ; j <= this->largeur ; ++j){
            string sortie = VIDE;
            bool aRobots  = false;

            // Détermination si nécessaire d'afficher un robots
            for(const Robots& r : vecRobots){
                if(r.getPosLargeur() == j && r.getPosHauteur() == i){
                    aRobots = true;
                    // Détermination du numéro du robots
                    sortie = to_string(r.getID());
                }
            }
            // Affichage de l'ID du robot
            if(aRobots)
                cout << sortie;
            else
                cout << VIDE;
        }
        cout << LIMITEHAUTEUR << endl;
    }
    // Affichage de la limite de la largeur
    for(unsigned i = 0 ; i <= this->largeur + 1; ++i)
        cout << LIMITELARGEUR;

    cout << endl;
}