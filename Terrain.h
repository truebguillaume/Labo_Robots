//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_TERRAIN_H
#define LABO_ROBOTS_TERRAIN_H

#include <vector>
#include <string>

#include "Robots.h"

enum Topologie {B,T};
using LigneTerrain = std::vector<Topologie>;
using DetailsTerrain = std::vector<LigneTerrain>;

class Terrain {
public:

    // CONSTRUCTEUR ----------------------------------------------------------------------------------------------------
    Terrain() : Terrain(10,10){};
    Terrain(unsigned _largeur, unsigned _hauteur)
    : largeur(_largeur), hauteur(_hauteur){
        construitTerrain();
    };

    // METHODES --------------------------------------------------------------------------------------------------------
    void afficherTerrain(Robots robots);
    bool deplacementPossible(Robots robots);

private:
    // DATA ------------------------------------------------------------------------------------------------------------
    const unsigned largeur;
    const unsigned hauteur;
    std::vector<std::string> tableauScore;

    // METHODES --------------------------------------------------------------------------------------------------------
    void construitTerrain();
};


#endif //LABO_ROBOTS_TERRAIN_H
