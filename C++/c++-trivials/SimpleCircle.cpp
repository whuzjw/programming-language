class SimpleCircle {
public:
	SimpleCircle(double x, double y, double radius): x(x), y(y), itsRadius(new double(radius)) {}
	SimpleCircle(): SimpleCircle(0,0,0){}
	~SimpleCircle() {delete itsRadius;}
	SimpleCircle(const SimpleCircle& n) : x(x), y(y), itsRadius(new double(*n.itsRadius)){}
	SimpleCircle(SimpleCircle&& n) : x(x), y(y), itsRadius(n.itsRadius) {n.itsRadius = nullptr;}

	void setRadius(double radius) { *itsRadius = radius; }
	void setX(double x) { this->x = x;}
	void setY(double y) { this->y = y;}

	double getRadius() { return *itsRadius; }
	double getX() { return x; }
	double getY() { return y; }

private:
	double* itsRadius;
	double x, y;
};