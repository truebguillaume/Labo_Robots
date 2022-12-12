//
// Created by Guillaume Trüeb on 14.11.22.
//

#include <string>

#ifndef MODELCPP_ANNEXE_H
#define MODELCPP_ANNEXE_H

// Fonction permettant de faire saisir une valeur entière à un
// utilisateur et de prendre en charge les potentielles erreurs.
// ---------------------------------------------------------------------------------------------------------------------
// @param MSG               : correspond au message à afficher avant la saisie
// @param min               : correspond à la borne minimale acceptable pour la saisie
// @param max               : correspond à la borne maximale acceptable pour la saisie
// @param MSG_ERREUR        : correspond au message à afficher si une erreur survient
// ---------------------------------------------------------------------------------------------------------------------
// @retour                  : une valeur de type int comprenant la saisie de l'utilisateur
// @exceptions              : -
int  saisieEntier(const std::string& MSG, int min, int max, const std::string& MSG_ERREUR);

// Fonction permettant de demander à l'utilisateur une question en attendant une réponse oui ou non
// ---------------------------------------------------------------------------------------------------------------------
// @retour                  : une valeur de type bool avec true si la réponse était oui
// @exceptions              : -
bool repondOui();

#endif //MODELCPP_ANNEXE_H
