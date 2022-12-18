// ---------------------------------------------------------------------------------
// Fichier        : Labo_Robots_Groupe_07_H.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 18 décembre 2022
// But            : Ce programme réalise le battle royal d'un nombre de robots
//                  défini par l'utilisateur dans un terrain. La saisi des
//                  dimensions du terrain est effectué par l'utilisateur. Le
//                  programme s'interrompe. lorsqu'il n'y a plus qu'un robots.
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#include <iostream>     // cout, cin
#include <cstdlib>      // EXIT_SUCCESS
#include <limits>       // Numeric limits
#include <string>       // Utilisation string
#include <thread>       // sleep for
#include "annexe.h"     // Librairie personnelle (gestion saisie,...)
#include "terrain.h"    // Classe terrain


#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;



int main() {

// ---------------------------------------------------------------------------------
// Constante pour la génération du terrain
const int LARGEUR_MIN   = 10,  LARGEUR_MAX   = 1000;  // Largeur minimal / maximal
const int HAUTEUR_MIN   = 10,  HAUTEUR_MAX   = 1000;  // Hauteur minimal / maximal

// Constante pour le nombre de robots présent lors du combat
const int NB_ROBOTS_MIN = 1 , NB_ROBOTS_MAX = 10;     // Nombre minimal / maximal

// Message d'erreur et de saisi d'utilisateur
const string MSG_ERREUR            = "/!\\ Saisie non conforme ...";
const string MSG_BIENVENU          = "Ce programme realise le battle royal de robots dans une arene";
const string MSG_SAISIE_LARGEUR    = "largeur";
const string MSG_SAISIE_HAUTEUR    = "hauteur";
const string MSG_SAISIE_ROBOTS     = "nbre object";

// Variable saisi par l'utilisateur pour la largeur et la hauteur du terrain
unsigned largeurTerrain, hauteurTerrain;
// Variable saisi par l'utilisateur pour le nombre de robot(s)
unsigned nbRobots;

// ---------------------------------------------------------------------------------
// Message de bienvenu
cout << MSG_BIENVENU << endl;

// Saisie des dimensions du terrain
largeurTerrain = saisieEntier(MSG_SAISIE_LARGEUR,  LARGEUR_MIN,
                              LARGEUR_MAX, MSG_ERREUR);
hauteurTerrain = saisieEntier(MSG_SAISIE_HAUTEUR,  HAUTEUR_MIN,
                              HAUTEUR_MAX,MSG_ERREUR);

// Saisie du nombre de robots
nbRobots       = saisieEntier(MSG_SAISIE_ROBOTS,   NB_ROBOTS_MIN,
                              NB_ROBOTS_MAX, MSG_ERREUR);

vector<Robots> vecRobots;
vecRobots.reserve(nbRobots);

unsigned posLargeur, posHauteur;

for(unsigned i = 0 ; i < nbRobots ; ++i){
    do{
        posLargeur = nbAleatoire(0,largeurTerrain);
        posHauteur = nbAleatoire(0,hauteurTerrain);
    }while(Robots::positionDUnRobot(vecRobots,largeurTerrain,hauteurTerrain));


    vecRobots.insert(vecRobots.end(),Robots(i,posLargeur,posHauteur));
}

while(vecRobots.size() > 1){
    Terrain monTerrain = Terrain(largeurTerrain, hauteurTerrain);
    monTerrain.afficher(vecRobots);

    // Pause d'excution (PDF)
    this_thread::sleep_for(500ms);

    // Gestion du clear d'affichage
    #ifdef _WIN32
    system("cls");      // WINDOWS
    #else
    system("clear");             // MAC
    #endif
}


cout << "Pressez ENTER pour quitter";
VIDER_BUFFER;                       // on va surment de faire enculer si on garde
                                    // un define PTDR

return EXIT_SUCCESS;
}