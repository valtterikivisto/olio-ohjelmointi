#include "animal.h"

#include <iostream>
using namespace std;

Animal::Animal() {}

Animal::~Animal()
{
    cout << "Elain tuhotuu." << endl;
}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}
