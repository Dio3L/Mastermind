#ifndef MASTERMIND_HPP
#define MASTERMIND_HPP

class Mastermind
{
private:
    int _sizeCode;
    int _MastermindCode[8];
public:
    Mastermind(int sizeCode);
    ~Mastermind();

    int ChiffreBienPlace(int * Code);
    int ChiffreMalPlace(int * Code);
    void afficherCode(void);
};


#endif