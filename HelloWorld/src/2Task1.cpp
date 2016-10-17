#include <iostream>

using namespace std;


// Enum
enum color {
	red,
	green,
	blue
};

// Methods
string colorString(enum color color);

// Point
struct point {
    int x;
    int y;
    enum color color;

    point(int xval, int yval, enum color colorval) :
        x(xval), y(yval), color(colorval) {};

	void print() const {
		cout << "((" << x << ", " << y << "), " << colorString(color) << ")" << endl;
	}
};

string colorString(enum color color) {
    switch (color) {
    case 0:
        return "red";
        break;
    case 1:
        return "green";
        break;
    case 2:
        return "blue";
        break;
    default:
        return "unknown color";
    }
}


int main() {
	// Create points
	point p1(0, 0, green);
	p1.x = 12;
	p1.y = 13;
	p1.color = red;

	point p2 = { 11, 13, red };

	point *pp3;		// pointer variable
	pp3 = &p1;		// store address of p1 in pointer variable

	point *pp4 = new point(0, 0, green);
	pp4 -> x = 12;
	pp4 -> y = 13;
	pp4 -> color = red;

	p1.print();
	point(11, 12, green).print();
}
