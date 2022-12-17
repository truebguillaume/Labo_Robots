// ---------------------------------------------------------------------------------
// Demo           : Robots
// Fichier        : Robots.cpp
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// But            : Réalisation d'un battle royal de robot dans une arène
// Modifications  :
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------


#include "Robots.h"
#include "annexe.h"
#include <random>

Robots::Robots(unsigned id, unsigned posLargeur, unsigned posHauteur)
    : id(id), posLargeur(posLargeur), posHauteur(posHauteur) {}

// Get identificateur & position
// Get X
unsigned Robots::getPosLargeur() const {
    return this->posLargeur;
}

unsigned Robots::getPosHauteur() const {
    return this->posHauteur;
}

/*
void Robots::setPosLargeur(unsigned posLargeur) {
    this-> posLargeur = posLargeur;
}

void Robots::setPosHauteur(unsigned posHauteur) {
    this -> posHauteur = posHauteur;
}
*/

bool Robots::positionDUnRobots(unsigned posLargeur, unsigned posHauteur){
    if(this->getPosLargeur() == posLargeur && this->getPosHauteur() == posHauteur)
        return true;
    return false;
}

void Robots::deplacer(unsigned short nbUnites) {

    auto randDirection = (Direction) nbAleatoire(0,3);

    do{
        switch(randDirection) {
            case Direction::DOWN:
                direction = (Direction) +nbUnites;
                break;

            case Direction::LEFT:
                direction = (Direction) -nbUnites;
                break;

            case Direction::RIGHT:
                direction = (Direction) +nbUnites;
                break;

            case Direction::UP:
                direction = (Direction) -nbUnites;
                break;
        }

    }while(true);
}


Robots::~Robots(){}



// Set déplacement & position
void deplacer(unsigned short nbUnites);

// Si on met un array
unsigned Robots::getID() const {return this->id;}