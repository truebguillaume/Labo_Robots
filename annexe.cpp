//---------------------------------------------------------
// Demo           : annexe.cpp
// Fichier        : annexe.cpp
// Auteur(s)      : Trüeb Guillaume
// But            : Fournir différentes fonctions permettant de rendre plus efficace
//                : certaines actions répétitives, tel que la saisie utilisateur.
// Modifications  :
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
//---------------------------------------------------------

#include <iostream>
#include "annexe.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int saisieEntier(const string& MSG, int min, int max, const string& MSG_ERREUR) {

    int  saisie;                 // Variable de stockage de la saisie
    bool erreur;                 // Variable de stockage de l'état de la saisie

    do {
        // Affichage message de demande de saisie
        cout << MSG;

        // Vérifie si le flux est cassé ou si la valeur est en dehors des valeurs minimum et maximum
        erreur = not(cin >> saisie) or saisie < min or saisie > max;

        // Si la saisie est incorrecte affiche message erreur et répare le flux
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        VIDER_BUFFER;

    }while(erreur);

    return saisie;
}

// Cette fonction permet à l'utilisateur de recommencer le programme
bool repondOui() {
    char saisie;                // Variable de stockage de la saisie
    bool erreur;                // Variable de stockage de l'état de la saisie
    bool recommencer;           // Variable de stockage de la réponse de retour

    do {
        // Affichage message de demande de saisie
        cout << endl << "Voulez-vous recommencer le programme ? (o/n) : ";

        // Vérifie si le flux est cassé ou si la valeur est en dehors des valeurs minimum et maximum
        erreur = not(cin >> saisie) or (saisie != 'o' and saisie != 'n');

        // Si la saisie est incorrecte affiche message erreur et répare le flux
        if (erreur) {
            cout << "/!\\ Veuillez saisir 'o' ou 'n' ..." << endl;
            cin.clear();
        }

        VIDER_BUFFER;

    }while(erreur);

    // Si l'utilisateur a saisi 'o' on retourne true
    if (saisie == 'o') {
        recommencer = true;
    }
    else {
        recommencer = false;
    }

    return recommencer;
}