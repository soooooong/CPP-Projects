/*
 * copyconstructorfunction.cpp
 *
 *  Created on: 2018年11月28日
 *      Author: song
 */
#include <iostream>
#include<assert.h>
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



deep_copy_constructor_function::deep_copy_constructor_function(){
	cout << "拷贝构造函数:深拷贝，构造函数" << endl;
	p=new int(100);
}

deep_copy_constructor_function::~deep_copy_constructor_function(){
	assert(p!=NULL);
	delete p;
	cout << "拷贝构造函数:深拷贝，析构函数" << endl;
}

deep_copy_constructor_function::deep_copy_constructor_function(const deep_copy_constructor_function & c)
{
	cout << "拷贝构造函数:深拷贝，拷贝构造函数" << endl;
	weight =c.weight;
	hight= c.hight;
	p=new int(100);
	*p=*(c.p);
}




} /* namespace std */






