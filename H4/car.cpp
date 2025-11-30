#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto: " << brand << " " << model << endl;
    cout << "Moottori: " << this->objEngine.getHorsepower() << "hp, " << this->objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << this->objWheel1.getSize() << " tuumaa, " << this->objWheel1.getType() << endl;
    cout << "Rengas 2: " << this->objWheel2.getSize() << " tuumaa, " << this->objWheel2.getType() << endl;
    cout << "Rengas 3: " << this->objWheel3.getSize() << " tuumaa, " << this->objWheel3.getType() << endl;
    cout << "Rengas 4: " << this->objWheel4.getSize() << " tuumaa, " << this->objWheel4.getType() << endl;
}

Car::Car() {}

Car::Car(string model, string brand)
{
    this->model = model;
    this->brand = brand;
}

void Car::setWheels()
{
    objWheel1 = Wheel(17, "kesarengas");
    objWheel2 = Wheel(17, "kesarengas");
    objWheel3 = Wheel(17, "kesarengas");
    objWheel4 = Wheel(17, "kesarengas");
}

void Car::setEngine()
{
    objEngine = Engine(150, 2.0);
}
