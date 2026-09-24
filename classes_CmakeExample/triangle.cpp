#include"triangle.hpp"

Triangle::Triangle(float sideA, float sideB, float C): sideA(sideA), sideB(sideB), sideC(C) { 
    this->coord = Coordinates(15, 15);
}
Triangle::Triangle(): Triangle(10, 15, 20) {
    // this->sideA = 10;
    // this->sideB = 15;
    // this->sideC = 20;
    this->coord = Coordinates(25, 15);
}


Triangle::Triangle(float sideA, float sideB): Triangle(sideA, sideB, 10) {
    // this->sideA = sideA;
    // this->sideB = sideB;
    // this->sideC = 10;
    this->coord = Coordinates(12, 15);
}

float Triangle::getPerimeter() const {
    return sideA + sideB + this->sideC;
}

float Triangle::getArea() const {
    float s = (sideA + sideB + sideC)/2;

    float area = sqrt(s * (s-sideA) * (s-sideB) * (s-sideC));
    return area;
}
