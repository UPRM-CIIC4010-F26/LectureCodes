#include<iostream>
#include<cmath>

using namespace std;

class Parallelogram {

    private:
    double height;
    double base;
    double angle;// In degrees.

    protected:
    void saySomething() { cout << "Im protected";}

    public:
    Parallelogram(double height, double base, double angle) {
        this->height = height;
        this->base = base;
        this->angle = angle;
        cout << "Parallelogram constructor" << endl;
    }
    Parallelogram() : Parallelogram(10, 10, 90){}

    ~Parallelogram() {
        cout << "Parallelogram died" << endl;
    }

    double getSide() const {
        return height;
    }

    void setSide(double value) {
        height = value;
    }

    double getBase() const {
        return base;
    }

    void setBase(double value) {
        base = value;
    }

    double getAngle() const {
        return angle;
    }

    void setAngle(double value) {
        angle = value;
    }

    double getArea() {
        cout << "Calculated in parallelogram" << endl;
        double height = getSide() * sin(angle * M_PI/180);
        return getBase() * height;
    }
    double getPerimeter() {
        return 2 * (getBase() + getSide());
    }
    virtual string getShapeName() {
        return "Parallelogram";
    }
};

class Rectangle: public Parallelogram {
    public:
        Rectangle(int height, int base): Parallelogram(height, base, 90) {
            cout << "Rectangle constructor" << endl;
        }
        ~Rectangle() {
            cout << "Rectangle died" << endl;
        }
        void sayHello() {
            cout << "I'm a rectangle. Hello!" << endl;
        }
};

int main() {
    // Parallelogram p1 = Parallelogram(12, 13, 45);

    // cout << "Area parallelogram: " << p1.getArea() << endl;
    // cout << "Parallelogram shape: " << p1.getShapeName() << endl;

    // Rectangle r1 = Rectangle(12, 13);

    // cout << "Area rectangle: " << r1.getArea() << endl;
    // cout << "Rectangle shape: " << r1.getShapeName() << endl;

    Parallelogram *p2 = new Rectangle(12, 45);

    cout << "Parallelogram angle: " << p2->getAngle() << endl;
    cout << "Parallelogram height: " << p2->getSide() << endl;
    cout << "Parallelogram base: " << p2->getBase() << endl;

}