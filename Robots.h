//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>

// Using pour réduire lisibilité du code
using Data = int;
using posRob = std::array<Data,2>;

class Robots {
public :
// Constructeur:
Robots(int id, int x, int y);

int getID() const;   // Attribution ID
int getX()  const;   // Attribution X
int getY()  const;   // Attribution Y

void setX();         //
void setY();

private :
    int id; // Identificateur du robot
    int x, y; // Valeur de l'axe

// Déterminer qui est le vainqueur en fonction de l'arrivée
bool estVainqueur(Robots, Robots);

#endif //LABO_ROBOTS_ROBOTS_H
