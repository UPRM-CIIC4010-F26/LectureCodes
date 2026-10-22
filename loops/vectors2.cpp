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

void removeAllSquares(vector<Rectangle> &rectangles) {
    // for(auto it = rectangles.begin(); it != rectangles.end(); it++) {
    //     if(it->getHeight() == it->getWidth()) {
    //         rectangles.erase(it);
    //     }
    // }
    for(int i = rectangles.size() - 1; i >= 0; i--) {
        if(rectangles[i].getHeight() == rectangles[i].getWidth()) {
            rectangles.erase(rectangles.begin() + i);
        }
    }
}

void removeFirstSquare(vector<Rectangle> &rectangles) {
    for(auto it = rectangles.begin(); it != rectangles.end(); it++) {
        if(it->getHeight() == (*it).getWidth()) {
            rectangles.erase(it);
            return;
        }
    }
}

// 1, 2, 3, 5

int main() {
    vector<Rectangle> rectangles;
    rectangles.push_back(Rectangle(2, 3));
    rectangles.push_back(Rectangle(4, 4));
    rectangles.push_back(Rectangle(5, 6));
    rectangles.push_back(Rectangle(7, 7));

    cout << "Rectangles in vector:" << endl;
    for(auto it=rectangles.begin(); it != rectangles.end(); it++) {
        cout << it->toString() << endl;
    }
    removeFirstSquare(rectangles);
    cout << "Rectangles after removing squares:" << endl;
    for(auto it=rectangles.begin(); it != rectangles.end(); it++) {
        cout << it->toString() << endl;
    }

    
}