class Point {
public:
	Point(int x,int y): x(x),y(y){}
	Point(): Point(0,0) {}

	Point& operator ++ ();
	Point operator ++ (int);
	Point& operator -- ();
	Point operator -- (int);
	

	void move(int newX, int newY);
	void moveX(int newX) { x = newX; }
	void moveY(int newY) { y = newY; }

	int getX() const{ return x; }
	int getY() const{ return y; }
private:
	int x, y;
};
void Point::move(int newX, int newY) {
	x = newX;
	y = newY;
}
Point& Point::operator ++ () {
	x++; y++;
	return *this;
}
Point Point::operator ++ (int) {
	Point m = *this;
	++(*this);
	return m;
}
Point& Point::operator -- () {
	x--; y--;
	return *this;
}
Point Point::operator--(int) {
	Point m = *this;
	--(*this);
	return m;
}