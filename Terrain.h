//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_TERRAIN_H
#define LABO_ROBOTS_TERRAIN_H

#include <vector>
#include <string>
#include <iostream>

#include "Robots.h"

// B = barrière / T = terrain
enum  Topologie {B,T};
using LigneTerrain = std::vector<Topologie>;
using DetailsTerrain = std::vector<LigneTerrain>;

class Terrain {
public:

    // CONSTRUCTEUR ----------------------------------------------------------------------------------------------------
    Terrain(unsigned _largeur = 10, unsigned _hauteur = 10) : largeur(_largeur), hauteur(_hauteur){};

    // METHODES --------------------------------------------------------------------------------------------------------
    //void afficherTerrain(Robots robots);
    //bool deplacementPossible(Robots robots);
    void afficher(std::vector<Robots>& vecRobots);

private:
    // DATA ------------------------------------------------------------------------------------------------------------
    const unsigned largeur;
    const unsigned hauteur;
    std::vector<std::string> tableauScore;

    // METHODES --------------------------------------------------------------------------------------------------------

};

#endif //LABO_ROBOTS_TERRAIN_H
