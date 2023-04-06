#ifndef JEU_HPP
#define JEU_HPP

#include "Joueur.hpp"
#include "Mastermind.hpp"

class Jeu
{
private:
    int _nbTours;
    int _sizeCode;
    Joueur * _j1;

public:
    Jeu(Joueur * j1);
    ~Jeu();

    
private:
    
};

#endif