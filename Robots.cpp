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

using namespace std;

Robots::Robots(unsigned id, unsigned posLargeur, unsigned posHauteur)
    : id(id), posLargeur(posLargeur), posHauteur(posHauteur) {}

// Get identificateur & position
unsigned Robots::getPosLargeur() const {
    return this->posLargeur;
}

unsigned Robots::getPosHauteur() const {
    return this->posHauteur;
}

void Robots::setPosLargeur(unsigned posLargeur) {
    this-> posLargeur = posLargeur;
}

void Robots::setPosHauteur(unsigned posHauteur) {
    this -> posHauteur = posHauteur;
}

bool deplacer(Direction direction, unsigned short nbUnites);


bool Robots::operator==(const Robots& robots) const{
   return (this->posHauteur == robots.posHauteur &&
           this -> posLargeur == robots.posLargeur);
}




Robots::~Robots(){}



// Set déplacement & position
void deplacer(unsigned short nbUnites);

// Si on met un array
unsigned Robots::getID() const {return this->id;}


// ---------------------------------------------------------------------------------
// Divers essaie

/*bool Robots::positionDUnRobots(unsigned _posLargeur, unsigned _posHauteur, const vector<Robots>& robots){
    for(const Robots& r : robots)
    {
        if(r.getPosLargeur() == _posLargeur && r.getPosHauteur() == _posHauteur)
            return true;
    }
    return false;
}*/
