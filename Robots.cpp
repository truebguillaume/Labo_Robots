// ---------------------------------------------------------------------------------
// Fichier        : Robots.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 18 décembre 2022
// But            : Ce programme représente les robots qui vont combattent
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#include "Robots.h"
#include "annexe.h"

using namespace std;

Robots::Robots(unsigned _id, unsigned posLargeur, unsigned posHauteur) : posLargeur(posLargeur), posHauteur(posHauteur)
{
    this->id = _id;
}

// Get identificateur & position
void Robots::setPosLargeur(unsigned _posLargeur) {
    this -> posLargeur = _posLargeur;
}

void Robots::setPosHauteur(unsigned _posHauteur) {
    this -> posHauteur = _posHauteur;
}

unsigned Robots::positionDUnRobot(const std::vector<Robots> &vecRobots) {
    /*for(const Robots& r : vecRobots){
        if(r.posLargeur == this->posLargeur && r.posHauteur == this->posHauteur && r.id != this -> id)
            return r.id;
    }*/

    for(unsigned i = 0; i < vecRobots.size() ; ++i)
    {
        if(vecRobots[i].posLargeur == this->posLargeur && vecRobots[i].posHauteur == this->posHauteur && vecRobots[i].id != this->id)
            return i;
    }
    return -1;
}

bool Robots::positionDUnRobot(const vector<Robots>& vecRobots, unsigned posLargeur, unsigned posHauteur){
    for(const Robots& r : vecRobots){
        if(r.getPosLargeur() == posLargeur && r.getPosHauteur() == posHauteur)
            return true;
    }
    return false;
}

bool Robots::operator==(const Robots& robots) const{
   return (this->posHauteur == robots.posHauteur &&
           this -> posLargeur == robots.posLargeur);
}


void Robots::deplacer(unsigned largeurTerrain, unsigned hauteurTerrain) {

    unsigned positionHauteur, positionLargeur;

    do {
        Direction direction = (Direction) nbAleatoire(1, 4);

        positionLargeur = this->posLargeur;
        positionHauteur = this->posHauteur;

        switch (direction) {
            case Direction::HAUT :
                positionHauteur -= 1;
                break;

            case Direction::BAS:
                positionHauteur += 1;
                break;

            case Direction::DROITE:
                positionLargeur += 1;
                break;

            case Direction::GAUCHE:
                positionLargeur -= 1;
                break;

        }
    }
    while (!((positionLargeur <= largeurTerrain && positionLargeur > 0) &&
            (positionHauteur <= hauteurTerrain && positionHauteur > 0)));

    setPosLargeur(positionLargeur);
    setPosHauteur(positionHauteur);

}
Robots::~Robots(){}


// Si on met un array
unsigned Robots::getID() const {return this->id;}


// ---------------------------------------------------------------------------------
// Divers essaie
