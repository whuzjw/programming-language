class Shape {
public:
	double getArea() {};
};
class Rectangle : public Shape {
public:
	Rectangle(double length, double width) :length(length), width(width) {}
	Rectangle(): Rectangle(0,0) {}
	double getArea() { return length * width; }
private:
	double length, width;
};
class Circle : public Shape {
public:
	Circle(double radius) : radius(radius){}
	Circle() : Circle(0) {}
	double getArea() { return 3.14 * radius * radius; }
private:
	double radius;
};
class Square : public Rectangle {
public:
	Square(double length) : Rectangle(length,length) {}
	Square() : Square(0) {}
};