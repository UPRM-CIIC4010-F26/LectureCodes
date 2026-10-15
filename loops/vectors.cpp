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

        void setHeight(int h){
            height = h;
        }
        void setWidth(int w){
            width = w;
        }

        string toString() const {
            return "Rectangle(" + to_string(width) + ", " + to_string(height) + ")";
        }
};



// Finding the average width of the rectangles
float getAverageWidth(vector<Rectangle> rectangles) {
    float total = 0;
    for(Rectangle rectangle: rectangles) {
        total += rectangle.getWidth();
    }
    return total/rectangles.size();
}
// Find the largest rectangle in the vector
Rectangle getLargestRectangle(vector<Rectangle> rectangles) {
    Rectangle largest = rectangles[0];
    for(Rectangle rect: rectangles) {
        float areaLargest = largest.getHeight() * largest.getWidth();
        float currentArea = rect.getHeight() * rect.getWidth();

        if(areaLargest < currentArea)
            largest = rect;
    }
    return largest;
}

// Modifying the rectangles in the vector to double their size
void doubleTheSize(vector<Rectangle> &rectangles) {
    // for(int i =0; i < rectangles.size(); i++) {
    //     rectangles[i].setWidth(rectangles[i].getWidth() * 2);
    //     rectangles[i].setHeight(rectangles[i].getHeight() * 2);
    // }
    // for(Rectangle &rect: rectangles) {
    //     rect.setWidth(rect.getWidth() * 2);
    //     rect.setHeight(rect.getHeight() * 2);
    // }
    for(auto it = rectangles.begin() ; it != rectangles.end(); it++) {
        it->setWidth(it->getWidth() *2);
        it->setHeight(it->getHeight() *2);
    }
}

// Making a filter with vectors
// Find all rectangles that are squares
// and return them in a new vector
vector<Rectangle> getAllSquares(vector<Rectangle> rectangles) {
    vector<Rectangle> squares;

    for(Rectangle rect: rectangles) {
        if(rect.getWidth() == rect.getHeight())
            squares.push_back(rect);
    }
    return squares;
}

int main() {
    vector<Rectangle> rectangles;
    rectangles.push_back(Rectangle(2, 3));
    rectangles.push_back(Rectangle(4, 4));
    rectangles.push_back(Rectangle(5, 6));
    rectangles.push_back(Rectangle(7, 7));

    cout << "Rectangles: " << endl;
    for(int i = 0; i < rectangles.size(); i++) 
        cout << rectangles[i].toString() << endl;
    cout << endl;

    cout << "The average width of the rectangles is: " << getAverageWidth(rectangles) << endl;

    cout << "Largest rectangle: " << getLargestRectangle(rectangles).toString() << endl;

    doubleTheSize(rectangles);
    cout << "After doubling size:" << endl;
    for(int i = 0; i < rectangles.size(); i++) 
        cout << rectangles[i].toString() << endl;
    cout << endl;

    cout << "All squares:" << endl;
    vector<Rectangle> squares = getAllSquares(rectangles);
    for(int i = 0; i < squares.size(); i++) 
        cout << squares[i].toString() << endl;
    cout << endl;

    cout << "Rectangles in inverse order" << endl;
    for(auto it = rectangles.rbegin(); it != rectangles.rend(); it++) {
        cout << it->toString() << endl;
    }
}