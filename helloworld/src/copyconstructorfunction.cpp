/*
 * copyconstructorfunction.cpp
 *
 *  Created on: 2018��11��28��
 *      Author: song
 */
#include <iostream>
#include "copyconstructorfunction.h"

namespace std {

copy_constructor_function::copy_constructor_function(int b) {
	// TODO Auto-generated constructor stub
	cout << "�������캯��������Ĺ��캯��" << endl;
	a=b;

}

copy_constructor_function::~copy_constructor_function() {
	// TODO Auto-generated destructor stub
	cout << "�������캯�����������������" << endl;
}

copy_constructor_function::copy_constructor_function(const copy_constructor_function & c){

	cout << "�������캯��������Ŀ������캯��" << endl;
	a=c.a;

}


void copy_constructor_function::show(){

	cout << a << endl;
}

} /* namespace std */
