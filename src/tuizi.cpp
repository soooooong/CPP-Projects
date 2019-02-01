/*
 * tuizi.cpp
 *
 *  Created on: 2019Äê1ÔÂ30ÈÕ
 *      Author: song
 */
#include <iostream>
#include "tuizi.h"
#include "chizi.h"

namespace std {

tuizi::tuizi(int no) {
	// TODO Auto-generated constructor stub
	this->tuizi_no=no;

}

tuizi::~tuizi() {
	// TODO Auto-generated destructor stub
}

int tuizi::set_tuizipai(int pai){

	if(1<=pai&&pai<=9)//t
	{
		this->tuizipai[T_SUB][this->t_num]=pai;
		this->t_num++;

	}
	else if(11<=pai&&pai<=19)
	{
		this->tuizipai[B_SUB][this->b_num]=pai;
		this->b_num++;
		//cout << this->t_num <<endl;
	}
	else if(21<=pai&&pai<=29)
	{
		this->tuizipai[W_SUB][this->w_num]=pai;
		this->w_num++;

	}

	int j,m,n,temp;
	for(j=0;j<3;j++)
	{
		for(m=0;m<13-1;m++)
			for(n=0;n<13-1-m;n++)
			{
				if(this->tuizipai[j][n]<this->tuizipai[j][n+1])
				{
					temp=this->tuizipai[j][n+1];
					this->tuizipai[j][n+1]=this->tuizipai[j][n];
					this->tuizipai[j][n]=temp;
				}

			}
	}

	//cout <<"set pai =" <<pai ;
	//cout << " t_num =" <<this->t_num ;
	//cout << " b_num =" <<this->b_num ;
	//cout << " w_num =" <<this->w_num <<endl;
	return 0;
}

int tuizi::init_jie(chizi * chizi)
{
	int i,j;
	for(i=0;i<TUI_PAI_NUM_MAX;i++)
	{
		//cout <<"tuizi_no "<<this->get_tuizi_no()<<" yifa num="<< chizi->yifa_num;

		this->set_tuizipai(chizi->get_pai());

	}


	return 0;

}

int tuizi::print_all()
{
	int i=0;
	cout << "\n"<<"-tuizi_no="<<this->tuizi_no<<"--------------------------------------------------------------------"<<endl;
	for(i=0;i<this->t_num;i++)
	{
		cout.width(4);
		cout << this->tuizipai[T_SUB][i];
	}
	cout << "\n"<<"--------------------------------"<<endl;
	for(i=0;i<this->b_num;i++)
	{
		cout.width(4);
		cout << this->tuizipai[B_SUB][i];
	}

	cout << "\n"<<"--------------------------------"<<endl;
	for(i=0;i<this->w_num;i++)
	{
		cout.width(4);
		cout << this->tuizipai[W_SUB][i];
	}

	cout <<"\n"<< "-------------------------------------------------------------------------------"<<endl;
	return 0;

}

int tuizi::get_tuizi_no()
{
	return this->tuizi_no;
}

int tuizi::jie(chizi * chizi)
{
	this->set_tuizipai(chizi->get_pai());
}

} /* namespace std */
