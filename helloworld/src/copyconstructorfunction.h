/*
 * copyconstructorfunction.h
 *
 *  Created on: 2018��11��28��
 *      Author: song
 */

#ifndef COPYCONSTRUCTORFUNCTION_H_
#define COPYCONSTRUCTORFUNCTION_H_

namespace std {

class copy_constructor_function {
private:
	int a;

public:
	//���캯��
	copy_constructor_function(int b);
	//��������
	virtual ~copy_constructor_function();
	//�������캯��
	copy_constructor_function(const copy_constructor_function & c);

	void show();
};



class deep_copy_constructor_function {
private:
	int weight;
	int hight;
	int * p;

public:
	//���캯��
	deep_copy_constructor_function();
	//��������
	virtual ~deep_copy_constructor_function();
	//�������캯��
	deep_copy_constructor_function(const deep_copy_constructor_function & c);

	void show();
};

} /* namespace std */

#endif /* COPYCONSTRUCTORFUNCTION_H_ */
