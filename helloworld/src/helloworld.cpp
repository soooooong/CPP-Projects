//============================================================================
// Name        : helloworld.cpp
// Author      : songz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "inheritance_demo.cpp"
#include "copyconstructorfunction.h"
#include "function_overload.h"
#include "operator_overloading.cpp"
#include "operator_overloading.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//for copy constructor function
	/*
	copy_constructor_function copy_constructor_A(100);
	copy_constructor_function copy_constructor_B=copy_constructor_A;
	copy_constructor_B.show();
	*/

    //for deep copy constructor function
	/*
	deep_copy_constructor_function test_deep_A;
	deep_copy_constructor_function test_deep_B(test_deep_A);
	*/

	//for function overload
	/*
	function_overload test_overload_A;
	int a=10;
	double b=1.1;
	char c[8]="hello";
	test_overload_A.print(a);
	test_overload_A.print(b);
	test_overload_A.print(c);
	*/

#if normal_multiple_inheritance_no_virtual_function
	//普通多继承，无虚函数
	Derive test_inheritance;
	test_inheritance.fun1();
	test_inheritance.fun2();
	test_inheritance.fun3();
#endif


#if normal_rhombus_inheritance_no_virtual_function
	//普通菱形继承，无虚函数
	Derive test_inheritance_1;
	test_inheritance_1.Base1::fun0();//菱形继承存在二义性问题,需要指定特定基类
	test_inheritance_1.fun1();
	test_inheritance_1.fun2();
	test_inheritance_1.fun3();
#endif

#if normal_multiple_inheritance_with_virtual_function
	//普通多继承，包含虚函数
	Derive test_inheritance_2;
	test_inheritance_2.fun1();
	test_inheritance_2.fun2();
	test_inheritance_2.fun3();


#endif

#if virtual_multiple_inheritance_with_virtual_function
	//虚继承，多继承，with虚函数
	Derive test_inheritance_2;
	test_inheritance_2.fun1();
	test_inheritance_2.fun2();
	test_inheritance_2.fun3();
#endif

#if operator_overloading_define

	box box1;
	box box2;
	box box3;
	double vol=0.0;

	box1.setlength(6.0);
	box1.setbreadth(7.0);
	box1.setheight(5.0);

	box2.setlength(12.0);
	box2.setbreadth(13.0);
	box2.setheight(10.0);

	vol=box1.getvolume();
	cout<<"box1.vol="<<vol<<endl;

	vol=box2.getvolume();
	cout<<"box2.vol="<<vol<<endl;

	//operator_overloading
	box3 = box1+box2;
	vol=box3.getvolume();
	cout << "Volume of Box3 : " << vol <<endl;

#endif
	return 0;
}
