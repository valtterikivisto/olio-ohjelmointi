#include "dog.h"

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<Animal> animal = make_unique<Animal>();
    unique_ptr<Dog> dog = make_unique<Dog>();
    animal->callOut();
    dog->callOut();
    return 0;
}
