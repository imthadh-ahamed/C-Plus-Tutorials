#pragma once
class Rectangle
{
	private:
		double length;
		double width;

	public:
		void setLength(double l);
		void setWidth(double w);
		double getLength();
		double getWidth();
		double calcArea();
};

