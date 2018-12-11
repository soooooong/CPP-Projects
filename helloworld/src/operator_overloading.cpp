/*
 * operator_overloading.cpp
 *
 *  Created on: 2018Äê12ÔÂ6ÈÕ
 *      Author: song
 */

#include <iostream>
#include "operator_overloading.h"


#define operator_overloading_define 0
#if operator_overloading_define
namespace std {

class box {
double length;
double breadth;
double height;
public:
	box(){};
	virtual ~box(){};
	double getvolume(void)
	{
		return length*breadth*height;
	}
	void  setlength(double len)
	{
		length= len;
	}
	void setbreadth(double bre)
	{
		breadth = bre;
	}
	void setheight(double hei)
	{
		height = hei;
	}

	box operator+(const box & b)
	{
		box box;
		box.length=this->length+b.length;
		cout<<"this->length:"<<this->length<<"  b.length"<<b.length<<endl;
		box.height=this->height+b.height;
		box.breadth=this->breadth+b.breadth;

		return box;
	}

};

} /* namespace std */

#endif
