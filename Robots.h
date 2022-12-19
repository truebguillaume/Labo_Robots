// ---------------------------------------------------------------------------------
// Fichier        : Robots.h
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 18 décembre 2022
// But            :
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>
#include <vector>

// Enum de direction du robots (Ordre du PDF)
enum class Direction{HAUT = 1, BAS, DROITE, GAUCHE};

class Robots {
public :
   // Constructeur:
   Robots(unsigned id, unsigned posLargeur, unsigned posHauteur); // ID, posX, posY

   // Méthodes
   // Get identificateur & position
    unsigned getID() const;                                 // Obtenir ID
    unsigned getPosLargeur()  const { return posLargeur; }; // Obtenir position X
    unsigned getPosHauteur()  const { return posHauteur; }; // Obtenir position Y

   // Set déplacement & position
   void deplacer(unsigned largeurTerrain, unsigned hauteurTerrain);
   void setPosLargeur(unsigned posLargeur);
   void setPosHauteur(unsigned posHauteur);

    static bool positionDUnRobot(const std::vector<Robots>& vecRobots,
                                unsigned posLargeur, unsigned posHauteur);
    unsigned positionDUnRobot(const std::vector<Robots> &vecRobots);
    // Opérateur de flux
    bool operator==(const Robots& robots) const;

    // Destructeurs
    ~Robots();

private :

   // Variables utile pour robots
   unsigned id = 0;                             // Identificateur du robot
   unsigned posLargeur = 0, posHauteur = 0;     // Valeur de l'axe

    // Enum pour direction
   static Direction direction;

};
#endif //LABO_ROBOTS_ROBOTS_H
