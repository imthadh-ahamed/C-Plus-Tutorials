#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setLength(double l) {
	length = l;
}

void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::getLength() {
	return length;
}

double Rectangle::getWidth() {
	return width;
}

double Rectangle::calcArea() {
	return width * length;
}
