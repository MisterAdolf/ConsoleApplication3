#include <iostream>
using namespace std;

class Square {
private:
    int side_length;

public:
    void setSideLength(int side) {
        side_length = side;
    }

    void draw() const {
        for (int i = 0; i < side_length; i++) {
            for (int j = 0; j < side_length; j++) {
                cout << "? ";
            }
            cout << endl;
        }
    }
};

class Rectangle {
private:
    int length, width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    void draw() const {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < width; j++) {
                cout << "? ";
            }
            cout << endl;
        }
    }
};

class Triangle {
private:
    int height;

public:
    void setHeight(int h) {
        height = h;
    }

    void draw() const {
        for (int i = 1; i <= height; i++) {
            
            for (int j = 0; j < height - i; j++) {
                cout << "  ";
            }
            
            for (int j = 0; j < (2 * i - 1); j++) {
                cout << "? ";
            }
            cout << endl;
        }
    }
};

int main() {
    Square square;
    square.setSideLength(5);
    cout << "Square:\n";
    square.draw();

    Rectangle rectangle;
    rectangle.setDimensions(4, 8);
    cout << "Rectangle:\n";
    rectangle.draw();

    Triangle triangle;
    triangle.setHeight(5);
    cout << "Triangle: \n";
    triangle.draw();

    return 0;
}
