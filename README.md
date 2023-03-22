# Lab-Project 1
A project that shows some point manipulation on a plane. Showing off my OOP skills

### The main task:
  Create a class for working with points in the plane. The point coordinates are Cartesian. Implement methods:  
  - Moving the point;
  - Determining the distance to the origin of the coordinates.
  
### Requirements for the project:
  - To demonstrate this, it is mandatory to write a main function. It is a must to demonstrate the different ways of creating objects
    of the base class (all kinds of constructors). The program has to demonstrate the use of all methods. 
  - In addition to the operations specified in the individual assignment, the base class must implement general methods:
      - initialization;
      - keyboard input (overloading of initialization, the initialization method called without arguments, requests data from the user);
      - displaying the state of all attributes of the class.
     (Explanation: main should not contain stream input and output operators.)
  - Create a base class with closed fields, where operations are implemented as class methods.
  - Encapsulate all attributes of the base class in a separate class. В The base class should have only one data field, represented by an object of of the attribute         class (aggregation).
  - Provide the attributes class with an initialization constructor, overload input/output operations for it as external friendly functions.
  - In a base class, implement a constructor with an initialization list and default values (one or more) and a constructor without arguments (initialization method         call).
  - The operations specified in the individual task can be implemented by overloading of the corresponding operators. First of all they are implemented as class methods.     If it is not possible to implement through a method, then as external friendly functions (the impossibility must be explained).
  - The class interface and implementation must be separated and put into separate files, outside the file with the main function.

# Documentation for Point and PointCoordinates Classes
## Files
The implementation consists of three files:
  1) **'main.cpp'**: Demonstrates the usage of the Point and PointCoordinates classes.
  2) **'points_and_coordinates.cpp'**: Contains the implementation of the Point and PointCoordinates classes.
  3) **'points_and_coordinates.h'**: Contains the declaration of the Point and PointCoordinates classes.
## Class: PointCoordinates
The PointCoordinates class is a simple container for x and y coordinates of a point.
### Methods
  - **'PointCoordinates(double x_val = 0, double y_val = 0)'**: Constructor that initializes the coordinates with the given values (default       values are 0).
  - **'double get_x() const'**: Returns the x coordinate.
  - **'double get_y()'** const: Returns the y coordinate.
  - **'void set_values(double x_val, double y_val)'**: Sets the x and y coordinates.
  - **'friend std::ostream& operator<<(std::ostream& os, const PointCoordinates& p)'**: Overloads the << operator for easier output of             PointCoordinates objects.
  - **'friend std::istream& operator>>(std::istream& is, PointCoordinates& p)'**: Overloads the >> operator for easier input of                   PointCoordinates objects.
## Class: Point
The Point class represents a point in 2D space using a PointCoordinates object for storing the coordinates.
### Methods
  - **'Point()'**: Default constructor that initializes the point at the origin (0, 0).
  - **'Point(double x_val, double y_val)'**: Constructor that initializes the point with the given x and y values.
  - **'Point(const Point& other)'**: Copy constructor that initializes a new point with the same coordinates as another point.
  - **'~Point()'**: Destructor.
  - **'void set_values(double x_val, double y_val)'**: Sets the x and y coordinates of the point.
  - **'Point& operator+=(const Point& other)'**: Overloads the **'+='** operator to move the point by adding the coordinates of another point.
  - **'double operator!() const'**: Overloads the **'!'** operator to calculate the distance from the point to the origin.
  - **'double distance_from_origin() const'**: Calculates the distance from the point to the origin.
  - **'void display() const'**: Displays the point's coordinates on the console.
  - **'void init_from_keyboard()'**: Initializes the point's coordinates with values entered from the keyboard.
  - **'friend std::ostream& operator<<(std::ostream& os, const Point& p)'**: Overloads the **'<<'** operator for easier output of Point objects.
  - **'friend std::istream& operator>>(std::istream& is, Point& p)'**: Overloads the **'>>'** operator for easier input of Point objects.
  - **'void init(double x_val = 0, double y_val = 0)'**: Initializes the point with the given x and y values (default values are 0).
## Usage
The **'main.cpp'** file demonstrates the usage of the Point and PointCoordinates classes:
  1) Initialize a point with the default constructor.
  2) Initialize a point with x and y values.
  3) Demonstrate the usage of the copy constructor.
  4) Move a point using the '+=' operator.
  5) Initialize a point with keyboard input.
  6) Calculate the distance from points to the origin.

<sub>For a more detailed understanding of the implementation, refer to the provided code files.</sub>
