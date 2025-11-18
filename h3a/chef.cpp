#include "chef.h"

Chef::Chef(string name) {
    cout << "Chef " << name << " konstruktori" << endl;
    this->name = name;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}
