#include <iostream>
#include <cstring>

using namespace std;

class teacher;

class student
{
private:
	string name;
	int age;
	char sex;
	int score;
public:
	student(string name , int age,char sex,int score);
	void student_print(teacher &teach);

};


class teacher
{
private:
	string name;
	int age;
	char sex;
	int score;
public:
	teacher(string name,int age ,char sex,int score);
	friend student;
};



student::student(string name,int age,char sex,int score)
{
	this->name= name;
	this->age = age;
	this->sex = sex;
	this->score = score;
}


teacher::teacher(string name,int age,char sex,int score)
{
	this->name= name;
	this->age = age;
	this->sex = sex;
	this->score = score;
}

void student::student_print(teacher &teach)
{
	cout << this->name <<endl;
	cout << this->age << endl;
	cout << this->sex << endl;
	cout << this->score << endl;

	cout << teach.name <<endl;

	cout << teach.age << endl;
	cout << teach.sex << endl;
	cout << teach.score << endl;


}

int main(void)
{
	student stu1("stu1",24,'n',860);
	teacher t1("te1",40,'N',99);

	stu1.student_print(t1);

}
