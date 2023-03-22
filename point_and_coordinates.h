#ifndef POINT_AND_COORDINATES_H
#define POINT_AND_COORDINATES_H
#include <iostream>

class PointCoordinates {
private:
    double x, y;

public:
    PointCoordinates(double x_val = 0, double y_val = 0);

    double get_x() const;
    double get_y() const;

    void set_values(double x_val, double y_val);

    friend std::ostream& operator<<(std::ostream& os, const PointCoordinates& p);
    friend std::istream& operator>>(std::istream& is, PointCoordinates& p);
};

class Point {
private:
    PointCoordinates coordinates;

public:
    Point();
    Point(double x_val, double y_val);
    Point(const Point& other);

    ~Point();

    void set_values(double x_val, double y_val);
    Point& operator+=(const Point& other);

    double operator!() const;
    double distance_from_origin() const;

    void display() const;
    void init_from_keyboard();

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);

    void init(double x_val = 0, double y_val = 0);
};

#endif // POINT_AND_COORDINATES_H