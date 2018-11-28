//============================================================================
// Name        : helloworld.cpp
// Author      : songz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "copyconstructorfunction.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//for copy constructor function
	copy_constructor_function copy_constructor_A(100);
	copy_constructor_function copy_constructor_B=copy_constructor_A;
	copy_constructor_B.show();




	return 0;
}
