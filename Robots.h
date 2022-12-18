//
// Created by Guillaume Trüeb on 12.12.22.
//

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>
#include <vector>

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
    unsigned getID() const;                        // Obtenir ID
    unsigned getPosLargeur()  const;               // Obtenir position X
    unsigned getPosHauteur()  const;               // Obtenir position Y

   // Set déplacement & position
   bool deplacer(Direction direction, unsigned short nbUnites);
   void setPosLargeur(unsigned posLargeur);
   void setPosHauteur(unsigned posHauteur);

   // Opérateur de flux
   bool operator==(const Robots& robots) const;

  // Destructeurs
  ~Robots();

   //bool positionDUnRobots(unsigned posLargeur, unsigned posHauteur, const std::vector<Robots>& robots);
private :

   // Enum pour direction
   Direction direction;

   // Variables utile pour robots
   unsigned id = 0;                             // Identificateur du robot
   unsigned posLargeur = 0, posHauteur = 0;     // Valeur de l'axe

};
#endif //LABO_ROBOTS_ROBOTS_H
