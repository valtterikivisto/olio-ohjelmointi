
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    ItalianChef objItalian("Anthony Bourdain");
    objChef.makeSalad();
    objChef.makeSoup();
    objItalian.makeSalad();
    objItalian.makeSoup();
    objItalian.makePasta();
    cout << "name of the Italian Chef is " << objItalian.getName() << endl;
    return 0;
}
