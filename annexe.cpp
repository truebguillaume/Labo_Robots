// ---------------------------------------------------------------------------------
// Fichier        : annexe.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 18 novembre 2022
// But            : Fournir les définitions des fonctions annexes. On y retrouve
//                  la fonction de saisi, repondOui et le générateur.
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#include <iostream>
#include "annexe.h"
#include <iomanip>
#include <random>

using namespace std;

// ---------------------------------------------------------------------------------
// Fonction permettant de faire saisir une valeur entière à un utilisateur et de
// prendre en charge les potentielles erreurs.
unsigned saisieEntier(const string& MSG, unsigned min, unsigned max, const string&
                      MSG_ERREUR, int pos) {

    int  saisie;                 // Variable de stockage de la saisie
    bool erreur;                 // Variable de stockage de l'état de la saisie

    do {
        // Affichage message de demande de saisie
        cout << MSG << setw(pos) <<  "[" << min << ".." << max << "] : ";

        // Vérifie si le flux est cassé ou si la valeur est en dehors des valeurs minimum et maximum
        erreur = not(cin >> saisie) or saisie < min or saisie > max;

        // Si la saisie est incorrecte affiche message erreur et répare le flux
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

       cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }while(erreur);

    return saisie;
}

// ---------------------------------------------------------------------------------
// Fonction générant un nombre aléatoire dans une plage déterminée par les bornes
// D'après le git https://github.com/gmbreguet/PRG1_DEMO/
unsigned nbAleatoire (unsigned min, unsigned max) {

    // Utilisation de static pour le générateur permettant d'éviter
    // de le définir à chaque appel de nbrAleatoire
    static random_device rand_dev;
    static default_random_engine generator(rand_dev());

    // Distribution d'un random de manière uniforme
    uniform_int_distribution<unsigned> distr(min, max);
    return distr(generator);

}

// ---------------------------------------------------------------------------------
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

      cin.ignore(numeric_limits<streamsize>::max(), '\n');

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
