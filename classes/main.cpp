#include<iostream>
#include "triangle.hpp"

int main() {
    Triangle t1 = Triangle(10, 25, 16); // t1 = Triangle();
    // t1.setSideA(10);
    // t1.setSideB(20);
    // t1.setSideC(15);

    cout << "Triangle(" << t1.getSideA() <<", " << t1.getSideB() << ", " << t1.getSideC() << ")" << endl;
    cout << "Permimeter: " << t1.getPerimeter() << endl;
    cout << "Area: " << t1.getArea() << endl;

    Triangle t2(100, 250, 195); // = Triangle(100, 250, 195)
    // t2.setSideA(100);
    // t2.setSideB(250);
    // t2.setSideC(195);

    
    cout << "Triangle1(" << t1.getSideA() <<", " << t1.getSideB() << ", " << t1.getSideC() << ")" << endl;
    cout << "Triangle2(" << t2.getSideA() <<", " << t2.getSideB() << ", " << t2.getSideC() << ")" << endl;

    t2.setSideA(50);
    cout << "Triangle2(" << t2.getSideA() <<", " << t2.getSideB() << ", " << t2.getSideC() << ")" << endl;


    Triangle t3(12, 12, 12);
    cout << "Triangle3(" << t3.getSideA() <<", " << t3.getSideB() << ", " << t3.getSideC() << ")" << endl;

    cout << "Coordinates: (" << t3.getCoordinates().getPosX() << ", " << t3.getCoordinates().getPosY() << ")";

    Coordinates c = t3.getCoordinates();
    int x = t3.getCoordinates().getPosX(); // c.getPosX()
    cout << "Coordinates2: (" << c.getPosX() << ", " << c.getPosY() << ")";

}