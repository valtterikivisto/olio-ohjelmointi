#include "car.h"

Car::Car() {}

Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData()
{
    cout << "Brand: " << brand << " || Model: " << model << " || Year: " << yearModel << endl;
}
