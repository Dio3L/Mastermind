#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include <string>

class Joueur
{
private:
    std::string _nom;
    int _score;

public:
    Joueur(std::string);
    Joueur();
    ~Joueur();

    void proposeCode(int * code, int sizeCode);
    
    void afficherCode(int * code,int size);
    void afficherNom(void);
private:
    void askForPlayerName(void);
};

#endif