// ---------------------------------------------------------------------------------
// Fichier        : Robots.h
// Auteur(s)      : Bee Gianni & Trüeb Guillaume
// Date           : 12 décembre 2022
// But            : Mise à disposition des méthodes et des constructeurs de robots
//                  qui doivent se battre. Ces derniers permettent de gérer
//                  les positions et le déplacement possibles.
// Modifications  : NIL
// Remarque(s)    : -
// Compilateur    : Apple clang version 14.0.0
// C++ version    : C++20
// ---------------------------------------------------------------------------------

#ifndef LABO_ROBOTS_ROBOTS_H
#define LABO_ROBOTS_ROBOTS_H

#include <array>
#include <vector>

// ---------------------------------------------------------------------------------
// Enum de direction du robots (Ordre du PDF)
enum class Direction{HAUT = 1, BAS, DROITE, GAUCHE};

class Robots {
public :
   // Constructeur de la classe Robots
   // ------------------------------------------------------------------------------
   /// \param id          : Numéro d'identification du robot
   /// \param _posLargeur : Position sur l'axe des abscisses du robot
   /// \param _posHauteur : Position sur l'axe des ordonnées du robot
   Robots(unsigned id, unsigned _posLargeur, unsigned _posHauteur);

   // Méthode permettant d'obtenir le numéro d'identifaction du robot
   // ------------------------------------------------------------------------------
   /// \return  : retourne l'id dans un entier non signé
   unsigned getID()          const { return id; };

   // Méthode permettant d'obtenir la position du robot sur l'axe des abscisses
   // ------------------------------------------------------------------------------
   /// \return  : retourne la valeur de l'axe des abscisses dans un entier non signé
   unsigned getPosLargeur()  const { return posLargeur; };

   // Méthode permettant d'obtenir la position du robot sur l'axe des ordonnées
   // ------------------------------------------------------------------------------
   /// \return  : retourne la valeur de l'axe des ordonnées dans un entier non signé
   unsigned getPosHauteur()  const { return posHauteur; };

   // Méthode permettant de définir la valeur de l'axe des abscisses
   // ------------------------------------------------------------------------------
   /// \param _posLargeur : détermine la valeur de positionnement
   void setPosLargeur(unsigned _posLargeur);

   // Méthode permettant de définir la valeur de l'axe des ordonnées
   // ------------------------------------------------------------------------------
   /// \param _posHauteur : déterminer la valeur de positionnement
   void setPosHauteur(unsigned _posHauteur);

   // Méthode permettant le déplacement aléatoires du robots dans des bornes
   // ------------------------------------------------------------------------------
   /// \param largeurTerrain : valeur de déplacement sur l'axe des abscisses
   /// \param hauteurTerrain : valeur de déplacement sur l'axe des ordonnées
   void deplacer(unsigned largeurTerrain, unsigned hauteurTerrain);

   // Méthode permettant de déterminer le numéro d'identification du robot s'il
   // est sur la même position qu'un autre robot
   // ------------------------------------------------------------------------------
   /// \param vecRobots   : Vecteur à contrôler
   /// \return            : retourne le numéro d'identification du robots
   unsigned positionDUnRobot(const std::vector<Robots> &vecRobots);

   // Méthode permettant de déterminer la position unique d'un robot lors de la
   // génération du terrain
   // ------------------------------------------------------------------------------
   /// \param vecRobots   : Vecteur à contrôler
   /// \param posLargeur  : Position maximal de l'axe des abscisses
   /// \param posHauteur  : Position maximal de l'axe des ordonnées
   /// \return            : retourne une valeur booléenne si déjà existante
   static bool positionDUnRobot(const std::vector<Robots>& vecRobots,
                                unsigned posLargeur, unsigned posHauteur);

   // Destructeurs
   ~Robots(){};

private :
   // Variable nécessaire au fonctionnement de la classe
   unsigned posLargeur = 0,     // Valeur de l'axe des abscisses
            posHauteur = 0;     // Valeur de l'axe des ordonnées
   unsigned id         = 0;     // N° d'identification de l'objet/robot

};
#endif //LABO_ROBOTS_ROBOTS_H
