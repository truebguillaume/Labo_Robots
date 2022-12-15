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

Robots::Robots(int id, int x, int y) : id(id), x(x), y(y) {}

// Get identificateur & position
// Get X
int Robots::getX() const {
    return this->x;
}

int Robots::getY() const {
    return this->y;
}

void Robots::setX(int x) {
    this-> x = x;
}

void Robots::setY(int y) {
    this -> y = y;
}

bool Robots::positionDUnRobots(unsigned posX, unsigned posY){
    if(this->getX() == posX && this->getY() == posY)
        return true;
    return false;
}

void Robots::deplacer(unsigned short nbUnites){

switch(nbUnites){
//    case int(Direction::DOWN) :

/*
    switch(direction){
        case Direction::DOWN:
            direction = Direction::DOWN;
            break;
        case Direction::LEFT:
            direction = Direction::LEFT;
            break;
        case Direction::RIGHT:
            direction = Direction::RIGHT;
            break;
        case Direction::UP:
            direction = Direction::UP;
            break;*/
    }
}


Robots::~Robots(){}



// Set déplacement & position
void deplacer(unsigned short nbUnites);

// Si on met un array
int Robots::getID() const {return this->id;}