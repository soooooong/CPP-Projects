//============================================================================
// Name        : mojiang.cpp
// Author      : songz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <stdlib.h>
using namespace std;

#define ALL_SPACE 200
static int pe[4][3][13]={0};
static int all[ALL_SPACE]={0};



int print_all()
{
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<13;k++)
			{
				if( pe[i][j][k] != 0)
				{
					cout.width(4);
					cout << pe[i][j][k] ;
				}
			}
					cout << "\n"<<"-------------------------------------------------------------"<<endl;
		}
		cout << "\n"<<"-------------------------------------------------------------"<<endl;
	}
}


int fa()
{
	int i,j,k,all_num=0;
	int p_no=0;
	int t_num=0,b_num=0,w_num=0;


	for(i=0;i<ALL_SPACE;i++)
	{
		if( (all[i]%10) != 0)
		{
				cout << all[i] << "  ";
				all_num++;
				if(i==ALL_SPACE-1)
				{
					cout  << "\n";
					cout  << "all_num = "<<all_num<< endl;
				}


				if(1<=all[i]&&all[i]<=9)//t
				{
					pe[p_no][0][t_num]=all[i];
					cout << "p_no:"<<p_no <<" t_num:"<<t_num+1<<" pe[p_no][0][t_num]: "<<pe[p_no][0][t_num] <<endl;
					t_num++;
				}
				else if(11<=all[i]&&all[i]<=19)//b
				{
					pe[p_no][1][b_num]=all[i];
					cout << "p_no:"<<p_no <<" b_num:"<<b_num+1<<" pe[p_no][1][b_num]: "<<pe[p_no][1][b_num] <<endl;
					b_num++;
				}
				else if(21<=all[i]&&all[i]<=29)//w
				{
					pe[p_no][2][w_num]=all[i];
					cout << "p_no:"<<p_no <<" w_num:"<<w_num+1 <<" pe[p_no][2][w_num]: "<<pe[p_no][2][w_num] <<endl;
					w_num++;
				}

				if((t_num+b_num+w_num)==13)
				{
							p_no++;
							t_num=0;
							b_num=0;
							w_num=0;
				}

				if(p_no==4)
				{
					break;
				}

		}
	}

	//print_all();
}

int xi()
{

	int i,k,n,temp;
	for(n=0;n<3;n++)
	{
		for(k=0;k<4;k++)
		{
			for(i=0;i<=9;i++)
			{
				all[i+k*10+n*40]=i+n*10;
			}
		}
	}


	int j=1000,p,q,t;

	while(j--)//随机交换1000次
	{
	  p=rand()%ALL_SPACE;//产生两个随机数
	  q=rand()%ALL_SPACE;
	  t=all[p];//交换
	  all[p]=all[q];
	  all[q]=t;
	}


	for(temp=0;temp<ALL_SPACE;temp++)
	{
		cout << all[temp] << "  ";
	}
	cout  << "\n";

	for(i=0,j=0,k=0,temp=0;temp<ALL_SPACE;temp++)
	{

		if(all[temp]>=1 && all[temp]<=9 )
		{
			i++;
		}
		else if(all[temp]>=11 && all[temp]<=19 )
		{
			j++;
		}
		else if(all[temp]>=21 && all[temp]<=29 )
		{
			k++;
		}
	}

	cout << "X >=1 && x <=9   num="<<i<<endl;
	cout << "X >=11 && x <=19   num="<<j<<endl;
	cout << "X >=21 && x <=29   num="<<k<<endl;

	cout << "!!!Hello mo!!!" << endl; // prints !!!Hello World!!!

}


int zhengli()
{
	int i,j,k;
	int m,n,temp;

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(m=0;m<13-1;m++)
				for(n=0;n<13-1-i;n++)
				{
					if(pe[i][j][n]>pe[i][j][n+1])
					{
						temp=pe[i][j][n+1];
						pe[i][j][n+1]=pe[i][j][n];
						pe[i][j][n]=temp;
						}

				}
		}

	}

	print_all();


}

int main() {
	xi();
	fa();
	zhengli();
	return 0;
}

