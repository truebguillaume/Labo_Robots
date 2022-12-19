// ---------------------------------------------------------------------------------
// Fichier        : Terrain.h
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 12 décembre 2022
// But            : Mise à disposition des méthodes et des constructeurs de terrain
//                  qui permettent de générer le terrain pour le combat des robots
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#ifndef LABO_ROBOTS_TERRAIN_H
#define LABO_ROBOTS_TERRAIN_H

#include <vector>
#include <string>
#include <iostream>

#include "Robots.h"

class Terrain {
public:
   // Constructeur de la classe terrain
   // ------------------------------------------------------------------------------
   /// \param _largeur : Dimension de l'axe des abscisses
   /// \param _hauteur : Dimension de l'axe des ordonnées
   Terrain(unsigned _largeur = 10, unsigned _hauteur = 10)
          : largeur(_largeur), hauteur(_hauteur){};

   // Méthode permettant d'afficher le terrain et le vecteur de robots
   // ------------------------------------------------------------------------------
   /// \param vecRobots : Vecteur à afficher dans le terrain
   void afficher(const std::vector<Robots>& vecRobots);

private:
   // Variable nécessaire au fonctionnement de la classe
   const unsigned largeur,  // Dimension sur l'axe des abscisses
                  hauteur;  // Dimension sur l'axe des ordonnées
   // Vecteur contenant l'historique des "kill"
   std::vector<std::string> tableauScore;
};
#endif //LABO_ROBOTS_TERRAIN_H
