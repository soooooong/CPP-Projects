/*
 * inheritance_demo.cpp
 *
 *  Created on: 2018年11月30日
 *      Author: song
 */
#include <iostream>
#include "inheritance_demo.h"

/*
 *
 * 普通继承不包含虚函数：单继承 多继承，菱形继承
 * 普通继承包含虚函数：单继承 多继承，菱形继承
 *
 * 虚继承不包含虚函数：单继承 多继承，菱形继承
 * 虚继承包含虚函数：单继承 多继承，菱形继承
 */

#define  normal_multiple_inheritance_no_virtual_function 0
#define  normal_rhombus_inheritance_no_virtual_function 1

namespace std {



#if normal_multiple_inheritance_no_virtual_function
class Base1
{
	public:
		Base1 (int a = 2):base1(a){}
		void fun1()
			{cout << "Base1::base1="<<base1 << endl;}
		int base1;
};
class Base2
{
	public:
		Base2 (int a = 3):base2(a){}
		void fun2(){cout << "Base2::base2="<<base2 << endl;}
		int base2;
};
class Derive: public Base1, public Base2
{
	public:
		Derive (int value = 4):derive (value){}
		void fun3(){
			cout<< "Derive::base1="<<base1 <<endl;
			cout<<  "Derive::base2="<<base2 <<endl;
			cout << "Derive::derive="<< derive << endl;
			}
		int derive;
};
#endif


#if normal_rhombus_inheritance_no_virtual_function

class Base
{
public:
	Base(int a=1):base(a){}
	void fun0()
	{
		cout<<"base::base="<<base<<endl;
	}
	int base;
};

class Base1:public Base
{
public:
	int base1;
	Base1(int a=2):base1(a){}
	void fun1()
	{
		cout << "base1::base1="<<base1<<endl;
	}
};

class Base2:public Base
{
public:
	int base2;
	Base2(int a=3):base2(a){}
	void fun2()
	{

		cout<<"base2::base2="<<base2<<endl;
	}
};

class Derive:public Base1,public Base2
{
public :
	int derive;
	Derive(int value=4):derive(value){}
	void fun3()
	{
		cout<<"derive::derive="<<derive<<endl;
	}
};


#endif























} /* namespace std */
