// ---------------------------------------------------------------------------------
// Fichier        : Robots.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 18 décembre 2022
// But            : Ce programme représente les robots qui font combattent
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------


#include "Robots.h"
#include "annexe.h"
#include <array>
#include <random>

using namespace std;

Robots::Robots(unsigned id, unsigned posLargeur, unsigned posHauteur)
    : id(id), posLargeur(posLargeur), posHauteur(posHauteur) {}

// Get identificateur & position
unsigned Robots::getPosLargeur() const {
    return this->posLargeur;
}

unsigned Robots::getPosHauteur() const {
    return this->posHauteur;
}

void Robots::setPosLargeur(unsigned posLargeur) {
    this-> posLargeur = posLargeur;
}

void Robots::setPosHauteur(unsigned posHauteur) {
    this -> posHauteur = posHauteur;
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


/*
void deplacer(Robots& robots, unsigned short nbUnites){
    for(Robots& robots : robots){
        robots.deplacer((Direction) nbUnites);
    }
}
*/

Robots::~Robots(){}



// Set déplacement & position
void deplacer(unsigned short nbUnites);

// Si on met un array
unsigned Robots::getID() const {return this->id;}


// ---------------------------------------------------------------------------------
// Divers essaie

/*bool Robots::positionDUnRobots(unsigned _posLargeur, unsigned _posHauteur, const vector<Robots>& robots){
    for(const Robots& r : robots)
    {
        if(r.getPosLargeur() == _posLargeur && r.getPosHauteur() == _posHauteur)
            return true;
    }
    return false;
}*/
