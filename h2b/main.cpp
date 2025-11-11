#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Ford", "Mondeo", 2005);
    carList.emplace_back("Mercedes", "AMG GT", 2016);
    carList.emplace_back("Nissan", "Almera", 1995);

    carList[1].printData();

    for (int i = 0; i < 3; i++)
    {
        carList[i].printData();
    }
    return 0;
}
