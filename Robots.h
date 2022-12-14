//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>

// Using pour réduire lisibilité du code
using Data = int;
using posRob = std::array<Data,2>;

// Enum de direction du robots
enum class Direction{GAUCHE, DROITE, HAUT, BAS};

class Robots {
public :
// Constructeur:
// Pas de constructeur vide car on contrôle la saisie
   Robots(int id, int x, int y);

// Méthodes
   int getID() const;   // Attribution ID
   posRob getPos() const;  // Position X, Y
   void deplacer(unsigned short nbUnites);
   // Est-ce pas plus intelligent de mettre un array ?
  //  int getX() const;    // Attribution X
  // int getY() const;    // Attribution Y

   void setPos();       // Set position robot -> Nouvelle position
  // void setX();         //
  // void setY();         //

private :
   Direction direction;
   int id; // Identificateur du robot
   int x, y; // Valeur de l'axe

// Déterminer qui est le vainqueur en fonction de l'arrivée
   bool estVainqueur(Robots, Robots);
};
#endif //LABO_ROBOTS_ROBOTS_H
