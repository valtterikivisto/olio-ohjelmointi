#include "italianchef.h"

ItalianChef::ItalianChef(string name): Chef(name) {
    cout << "Italian Chef " << this->name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian Chef " << this->name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return this->name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << name << " makes pasta" << endl;
}
