#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() {
	return radius;
}

double Circle::calcArea() {
	return 22 / 7.0 * radius * radius;
}
