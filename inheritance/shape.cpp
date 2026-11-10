#include<iostream>
#include<vector>

using namespace std;

class Shape {
    public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual std::string getShapeName() = 0;
};

class Triangle: public Shape {
    private:
    double base;
    double height;
    public:
    Triangle(double base, double height) {
        this->base = base;
        this->height = height;
    }
    double getArea() override {
        return 0.5 * base * height;
    }
    double getPerimeter() override {
        return 3 * base; // Assuming equilateral triangle for simplicity
    }
    std::string getShapeName() override {
        return "Triangle";
    }
};

class Circle: public Shape {
    private:
    double radius;
    public:
    Circle(double radius) {
        this->radius = radius;
    }
    double getArea() override {
        return 3.14159 * radius * radius;
    }
    double getPerimeter() override {
        return 2 * 3.14159 * radius;
    }
    double getCircumference() {
        return getPerimeter();
    }
    std::string getShapeName() override {
        return "Circle";
    }
};

class Parallelogram: public Shape {
    private:
    double height;
    double base;
    double angle; // In degrees
    public:
    Parallelogram(double height, double base, double angle) {
        this->height = height;
        this->base = base;
        this->angle = angle;
    }
    virtual double getArea() override {
        return base * height * sin(angle * M_PI / 180);
    }
    double getPerimeter() override {
        return 2 * (base + height);
    }
    std::string getShapeName() override final{
        return "Parallelogram";
    }
};

class Rectangle: public Parallelogram {
    public:
    Rectangle(double height, double base): Parallelogram(height, base, 90) {}
    // std::string getShapeName() override {
    //     return "Rectangle";
    // }
};


int main() {
    Shape* shape = new Rectangle(12, 6);

    cout << shape->getShapeName() << endl;

    vector<Shape*> shapes = {new Circle(23), new Rectangle(12, 5), new Triangle(12, 3), new Circle(2)};

    for(Shape* s: shapes) {
        cout << s->getShapeName() << endl;
        cout << "Area: " << s->getArea() << endl;

        if(dynamic_cast<Circle*>(s)){
            Circle* c = static_cast<Circle*>(s);
            cout << "Circumference: " << c->getCircumference() << endl;
        }
    }

}