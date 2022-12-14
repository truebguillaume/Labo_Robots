//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>

// Using pour réduire lisibilité du code
// using Data = int;
// using posRob = std::array<Data,2>;

// Enum de direction du robots (Ordre du PDF)
enum class Direction{UP = 1, DOWN = 2, RIGHT = 3, LEFT = 4};

class Robots {
public :
// Constructeur:
   Robots(int id, int x, int y);     // ID, posX, posY

// Méthodes
// Get identificateur & position
    int getID() const;               // Obtenir ID
    int getX()  const;               // Obtenir position X
    int getY()  const;               // Obtenir position Y

// Set déplacement & position
   void deplacer(unsigned short nbUnites);

   void setX(int x);
   void setY(int y);

// Destructeurs
  ~Robots();

// P-e utilisation de des array
   //  posRob getPos() const;  // Position X, Y
   //  void setPos();          // Set position robot -> Nouvelle position


private :
   // Enum pour direction
   Direction direction;

   // Variables utile pour robots
   int id = 0;                       // Identificateur du robot
   int x = 0, y = 0;                 // Valeur de l'axe

// Déterminer qui est le vainqueur en fonction de l'arrivée
   bool estVainqueur(Robots, Robots);
};
#endif //LABO_ROBOTS_ROBOTS_H
