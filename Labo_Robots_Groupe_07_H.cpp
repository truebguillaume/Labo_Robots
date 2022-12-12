// ---------------------------------------------------------------------------------
// Demo           : Labo_Robots_Groupe_07_H
// Fichier        : Labo_Robots_Groupe_07_H.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// But            : Réalisation d'un battle royal de robot dans une arène
// Modifications  :
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#include <iostream>     // cout, cin
#include <cstdlib>      // EXIT_SUCCESS
#include <limits>       // Numeric limits
#include <string>       // Utilisation string

#include "annexe.h"     // Librairie personnelle (gestion saisie,...)

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

int main() {
// Initilialisation des constantes du PRG
const string MSG_ERREUR = "/!\\ Saisie non conforme ...";
const int LARGEUR_MIN   = 10, LARGEUR_MAX   = 1000;
const int LONGUEUR_MIN  = 10, LONGUEUR_MAX  = 1000;
const int NB_ROBOTS_MIN = 0 , NB_ROBOTS_MAX = 9;

// Variable pour la largeur et longeur du terrain.
int largeurTerrain, longeurTerrain;
int nbRobots;

// Message de bienvenu
cout << "Ce programme réalise le battle royal de robots dans une arene" << endl;

// Saisie des dimensions du terrains
largeurTerrain = saisieEntier("largeur", MSG_ERREUR, LARGEUR_MIN, LARGEUR_MAX);
longeurTerrain = saisieEntier("hauteur", MSG_ERREUR, LONGUEUR_MIN, LONGUEUR_MAX);

// Saisie du nombre de robots
nbRobots = saisieEntier("nbre object", MSG_ERREUR, NB_ROBOTS_MIN, NB_ROBOTS_MAX);

// ....


cout << "Pressez ENTER pour quitter";
VIDER_BUFFER;                       // on va surment de faire enculer si on garde
                                    // un define PTDR

return EXIT_SUCCESS;
}

