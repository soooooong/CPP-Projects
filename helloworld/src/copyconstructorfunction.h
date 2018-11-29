/*
 * copyconstructorfunction.h
 *
 *  Created on: 2018年11月28日
 *      Author: song
 */

#ifndef COPYCONSTRUCTORFUNCTION_H_
#define COPYCONSTRUCTORFUNCTION_H_

namespace std {

class copy_constructor_function {
private:
	int a;

public:
	//构造函数
	copy_constructor_function(int b);
	//析构函数
	virtual ~copy_constructor_function();
	//拷贝构造函数
	copy_constructor_function(const copy_constructor_function & c);

	void show();
};



class deep_copy_constructor_function {
private:
	int weight;
	int hight;
	int * p;

public:
	//构造函数
	deep_copy_constructor_function();
	//析构函数
	virtual ~deep_copy_constructor_function();
	//拷贝构造函数
	deep_copy_constructor_function(const deep_copy_constructor_function & c);

	void show();
};

} /* namespace std */

#endif /* COPYCONSTRUCTORFUNCTION_H_ */
