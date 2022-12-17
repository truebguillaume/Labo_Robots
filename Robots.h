//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>

/*
 Tout ce qui est en position x corresponds à la largeur
 y = hauteur




*/

// Using pour réduire lisibilité du code
// using Data = int;
// using posRob = std::array<Data,2>;

// Enum de direction du robots (Ordre du PDF)
enum class Direction{UP = 1, DOWN = 2, RIGHT = 3, LEFT = 4};

class Robots {
public :
// Constructeur:
   Robots(unsigned id, unsigned posLargeur, unsigned posHauteur);     // ID, posX, posY

// Méthodes
// Get identificateur & position
    unsigned getID() const;               // Obtenir ID
    unsigned getPosLargeur()  const;               // Obtenir position X
    unsigned getPosHauteur()  const;               // Obtenir position Y

// Set déplacement & position
   void deplacer(unsigned short nbUnites);
   bool positionDUnRobots(unsigned posLargeur, unsigned posHauteur);

   void setX(unsigned posLargeur);
   void setY(unsigned posHauteur);

// Destructeurs
  ~Robots();

// P-e utilisation de des array
   //  posRob getPos() const;  // Position X, Y
   //  void setPos();          // Set position robot -> Nouvelle position


private :
   // Enum pour direction
   Direction direction;

   // Variables utile pour robots
   unsigned id = 0;                       // Identificateur du robot
   unsigned posLargeur = 0, posHauteur = 0;                 // Valeur de l'axe

   // Déterminer qui est le vainqueur en fonction de l'arrivée
   //bool estVainqueur(Robots, Robots);

};
#endif //LABO_ROBOTS_ROBOTS_H
