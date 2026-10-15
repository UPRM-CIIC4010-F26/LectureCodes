#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle(int width, int height) {
            this->width = width;
            this->height = height;
        }
        int getWidth() const {
            return width;
        }
        int getHeight() const {
            return height;
        }

        string toString() const {
            return "Rectangle(" + to_string(width) + ", " + to_string(height) + ")";
        }
};

// Making a filter with vectors
// Find all rectangles that are squares
// and return them in a new vector


// Finding the average length of the rectangles


// Find the largest rectangle in the vector


// Modifying the rectangles in the vector to double their size