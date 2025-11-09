#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;


int main()
{
    Car objectCar;
    objectCar.setBrand("Nissan");
    objectCar.setModel("Almera");
    objectCar.setYearModel(1995);
    objectCar.printData();

    Rectangle *objectRect = new Rectangle;
    objectRect->setWidth(20);
    objectRect->setHeight(10);
    double area = objectRect->getArea();
    double circum = objectRect->getCircum();
    cout << "Area: " << area << " || Circum: " << circum << endl;

    delete objectRect;
    objectRect = nullptr;

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Valtteri");
    objectStudent->setStudentNumber(100);
    objectStudent->setAverage(4.7);
    cout << "Name: " << objectStudent->getName() << " || Student number: " << objectStudent->getStudentNumber() << " || Student average: " << objectStudent->getAverage() << endl;



    return 0;
}
