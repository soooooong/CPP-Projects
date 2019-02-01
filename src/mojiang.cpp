//============================================================================
// Name        : mojiang.cpp
// Author      : songz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <stdlib.h>
#include "chizi.h"
#include "tuizi.h"
using namespace std;

int main() {
	chizi  chizi;
	tuizi tuizi_1(1);
	tuizi tuizi_2(2);
	tuizi tuizi_3(3);
	tuizi tuizi_4(4);

	tuizi_1.init_jie(&chizi);
	tuizi_2.init_jie(&chizi);
	tuizi_3.init_jie(&chizi);
	tuizi_4.init_jie(&chizi);

	tuizi_1.print_all();
	tuizi_2.print_all();
	tuizi_3.print_all();
	tuizi_4.print_all();

	tuizi_1.jie(&chizi);
	//tuizi_1.print_all();




	return 0;
}

