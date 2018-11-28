/*
 * copyconstructorfunction.cpp
 *
 *  Created on: 2018年11月28日
 *      Author: song
 */
#include <iostream>
#include "copyconstructorfunction.h"

namespace std {

copy_constructor_function::copy_constructor_function(int b) {
	// TODO Auto-generated constructor stub
	cout << "拷贝构造函数例子类的构造函数" << endl;
	a=b;

}

copy_constructor_function::~copy_constructor_function() {
	// TODO Auto-generated destructor stub
	cout << "拷贝构造函数例子类的析构函数" << endl;
}

copy_constructor_function::copy_constructor_function(const copy_constructor_function & c){

	cout << "拷贝构造函数例子类的拷贝构造函数" << endl;
	a=c.a;

}


void copy_constructor_function::show(){

	cout << a << endl;
}

} /* namespace std */
