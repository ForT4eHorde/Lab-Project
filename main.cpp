#include <iostream>
#include <cmath>
#include "point_and_coordinates.h" // Include the combined header file
using namespace std;

int main() {
    // Initialize point with default constructor
    Point p;
    p.display();

    // Initialize point with x and y values
    Point q(2, 1);
    q.display();

    // Demonstrate the copy constructor
    Point r(q);
    r.display();

    // Move point q using the += operator
    q += Point(-1, 4);
    q.display();

    // Initialize point with keyboard input
    Point g;
    g.init_from_keyboard();
    g.display();

    // Calculate distance from point to origin
    double distance_p = !g;
    double distance_q = !q;
    cout << "Distance from last point to origin: " << distance_p << endl;
    cout << "Distance from second point to origin: " << distance_q << endl;
}
