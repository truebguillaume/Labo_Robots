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
// Methode
// Position du robot en fonction de l'ID
posRob position(Robots);

private :
    int x, // Valeur axe
        y;

// Deplacer le robots en fonction d'un variable
void deplacer(Robots, int val);

// Déterminer qui est le vainqueur en fonction de l'arrivée
bool estVainqueur(Robots, Robots);

// Identification du numéro du robot
int  initID(unsigned nb);

};


#endif //LABO_ROBOTS_ROBOTS_H
