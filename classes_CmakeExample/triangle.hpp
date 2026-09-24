#include<iostream>
#include<string>
#include<cmath>
#include"coordinates.cpp"

using namespace std;

class Triangle {
    private:
        float sideA;
        float sideB;
        float sideC;
        Coordinates coord;
    public:
        // CONstructors
        Triangle();
        Triangle(float sideA, float sideB, float sideC);
        Triangle(float sideA, float sideB); // C is 10 by default
        // Getters
        float getSideA() const {
            return this->sideA;
        }
        float getSideB() const {
            return this->sideB;
        }
        float getSideC() const {
            return this->sideC;
        }
        Coordinates getCoordinates() const {
            return coord;
        }

        // Setter
        void setSideA(float sideA) {
            this->sideA = sideA;
        }
        void setSideB(float sideB) {
            this->sideB = sideB;
        }
        void setSideC(float sideC) {
            this->sideC = sideC;
        }

        float getPerimeter() const;
        float getArea() const;
};