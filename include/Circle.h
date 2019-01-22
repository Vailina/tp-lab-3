#ifndef _CIRCLE_H
#define _CIRCLE_H_
#pragma once
using namespace std;

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double);
	void Circle::setRadius(double);
	void Circle::setFerence(double);
	void Circle::setArea(double);
	double Circle::getRadius();
	double Circle::getFerence();
	double Circle::getArea();
};
endif;