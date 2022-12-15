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

Robots::Robots(unsigned id, unsigned x, unsigned y) : id(id), x(x), y(y) {}

// Get identificateur & position
// Get X
unsigned Robots::getX() const {
    return this->x;
}

unsigned Robots::getY() const {
    return this->y;
}

void Robots::setX(unsigned x) {
    this-> x = x;
}

void Robots::setY(unsigned y) {
    this -> y = y;
}

bool Robots::positionDUnRobots(unsigned posX, unsigned posY){
    if(this->getX() == posX && this->getY() == posY)
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