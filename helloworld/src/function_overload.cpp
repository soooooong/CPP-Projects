/*
 * function_overload.cpp
 *
 *  Created on: 2018Äê11ÔÂ29ÈÕ
 *      Author: song
 */
#include <iostream>
#include "function_overload.h"

namespace std {

function_overload::function_overload() {
	// TODO Auto-generated constructor stub

}

function_overload::~function_overload() {
	// TODO Auto-generated destructor stub
}

void function_overload::print(int a){
	cout<<"int value:"<<a<<endl;
}

void function_overload::print(double a){
	cout << "coubel value£º"<< a<<endl;
}

void function_overload::print(char *a){
	cout <<"char value:"<<a<<endl;
}

} /* namespace std */
