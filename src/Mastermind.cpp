#include "Mastermind.hpp"
#include <experimental/random>
#include <iostream>

using namespace std;


// Constructeur(s)
Mastermind::Mastermind(int sizeCode)
{
    _sizeCode = sizeCode;
    int newrand;
    int count = 0;
    if (_sizeCode > 10) _sizeCode = 10;
    if (_sizeCode < 4) _sizeCode = 4;
    for (int i = 0 ; i<_sizeCode ; i++)
    {
        do
        {
            count = 0;
            newrand = std::experimental::randint(0,9);
            for (int j = 0; j<i ; j++)
            {
                if (newrand == _MastermindCode[j]) count++;
            }
        } while (count>0);
        _MastermindCode[i] = newrand;
    }
}

// Destructeur
Mastermind::~Mastermind()
{
}

// Méthodes
int Mastermind::ChiffreBienPlace(int * code)
{
    int cbp = 0;
    for (int i = 1; i<=_sizeCode;i++)
    {
        if (_MastermindCode[i] == code[i])
        {
            cbp++;
        }
    }
    return cbp;
}

int Mastermind::ChiffreMalPlace(int * code)
{
    int cmp = 0;
    for (int i = 0;i<_sizeCode;i++)
    {
        for (int j=0;j<_sizeCode;j++)
        {
            
            if (_MastermindCode[i] == code[j])
            {
                cmp++;
            }
        }
    }
    return cmp;
}

void Mastermind::afficherCode(void)
{
    for (int i=0;i<_sizeCode;i++)
    {
        cout << _MastermindCode[i] << " ";
    }
    cout << endl;
}