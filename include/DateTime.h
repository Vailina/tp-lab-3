#ifndef CLASS_DATETIME_h
#define CLASS_DATETIME_h
#pragma once
#include <iostream>
using namespace std;

class DateTime
{
private:
	time_t t;
	
public:
	DateTime();
	DateTime(int, int, int);
	DateTime(DateTime& );
	string DateTime::getString();
	string DateTime::getToday();
	string DateTime::getYesterday();
	string DateTime::getTomorrow();
	string DateTime::getFuture(unsigned int);
	string DateTime::getPast(unsigned int);
	int DateTime::calcDifference(DateTime&);
};
endif;