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

Robots::Robots(int id, int x, int y) : id(id), x(x), y(y);

void Robots::setX() {this-> x = x;}
void Robots::setY() {this -> y = y;}

int Robots::getX() const { return x;}
int Robots::getY() const { return y;}
int Robots::getID() const {return id;}