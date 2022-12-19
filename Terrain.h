//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_TERRAIN_H
#define LABO_ROBOTS_TERRAIN_H

#include <vector>
#include <string>
#include <iostream>

#include "Robots.h"

class Terrain {
public:

    // CONSTRUCTEUR ----------------------------------------------------------------------------------------------------
    Terrain(unsigned _largeur = 10, unsigned _hauteur = 10) : largeur(_largeur), hauteur(_hauteur){};

    // METHODES --------------------------------------------------------------------------------------------------------
    void afficher(const std::vector<Robots>& vecRobots);
    bool deplacementPossible(unsigned posLargeur, unsigned posHauteur);

private:
    // DATA ------------------------------------------------------------------------------------------------------------
    const unsigned largeur;
    const unsigned hauteur;
    std::vector<std::string> tableauScore;

    // METHODES --------------------------------------------------------------------------------------------------------

};

#endif //LABO_ROBOTS_TERRAIN_H
