#include "point_and_coordinates.h"
#include <cmath>

PointCoordinates::PointCoordinates(double x_val, double y_val) : x(x_val), y(y_val) {}

double PointCoordinates::get_x() const {
    return x;
}

double PointCoordinates::get_y() const {
    return y;
}

void PointCoordinates::set_values(double x_val, double y_val) {
    x = x_val;
    y = y_val;
}

std::ostream& operator<<(std::ostream& os, const PointCoordinates& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, PointCoordinates& p) {
    is >> p.x >> p.y;
    return is;
}

Point::Point() {
    init();
}

Point::Point(double x_val, double y_val) : coordinates(PointCoordinates(x_val, y_val)) {}

Point::Point(const Point& other) : coordinates(other.coordinates) {}

Point::~Point() {}

void Point::set_values(double x_val, double y_val) {
    coordinates.set_values(x_val, y_val);
}

Point& Point::operator+=(const Point& other) {
    double new_x = coordinates.get_x() + other.coordinates.get_x();
    double new_y = coordinates.get_y() + other.coordinates.get_y();
    coordinates.set_values(new_x, new_y);
    return *this;
}

double Point::operator!() const {
    double x = coordinates.get_x();
    double y = coordinates.get_y();
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Point::distance_from_origin() const {
    double x = coordinates.get_x();
    double y = coordinates.get_y();
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Point::display() const {
    std::cout << "Point: " << coordinates << std::endl;
}

void Point::init_from_keyboard() {
    double x_val, y_val;
    std::cout << "Enter x and y values: ";
    std::cin >> x_val >> y_val;
    set_values(x_val, y_val);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << p.coordinates;
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    double x, y;
    is >> x >> y;
    p.set_values(x, y);
    return is;
}

void Point::init(double x_val, double y_val) {
    coordinates.set_values(x_val, y_val);
}