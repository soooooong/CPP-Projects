/*
 * chizi.cpp
 *
 *  Created on: 2019Äê1ÔÂ30ÈÕ
 *      Author: song
 */
#include <iostream>
#include <stdlib.h>
#include "chizi.h"

namespace std {

chizi::chizi() {
	// TODO Auto-generated constructor stub

	int xi_no=0;
	int i,k,n,temp;

	for(k=0;k<4;k++)
	{
		for(i=1;i<=9;i++)
		{
			this->chi[xi_no]=i;
			xi_no++;
		}
	}
	for(k=0;k<4;k++)
	{
		for(i=11;i<=19;i++)
		{
			this->chi[xi_no]=i;
			xi_no++;
		}
	}
	for(k=0;k<4;k++)
	{
		for(i=21;i<=29;i++)
		{
			this->chi[xi_no]=i;
			xi_no++;
		}
	}
	cout << xi_no << "  "<<endl;
	for(temp=0;temp<ALL_SPACE;temp++)
	{
		cout << this->chi[temp] << "  ";
	}
	cout  << "\n";

	int j=1000,p,q,t;

	while(j--)
	{
	  p=rand()%ALL_SPACE;
	  q=rand()%ALL_SPACE;
	  t=this->chi[p];
	  this->chi[p]=this->chi[q];
	  this->chi[q]=t;
	}


	for(temp=0;temp<ALL_SPACE;temp++)
	{
		cout << this->chi[temp] << "  ";
	}
	cout  << "\n";

	cout << "!!!Hello mo!!!" << endl; // prints !!!Hello World!!!



}

chizi::~chizi() {
	// TODO Auto-generated destructor stub
}

int chizi::get_pai()
{
	int return_pai;
	return_pai=this->chi[this->yifa_num];
	this->yifa_num++;
	return return_pai;
}
int chizi::put_pai(int pai)
{
	this->guo[this->yida_num]=pai;
	this->yida_num++;
}




} /* namespace std */
