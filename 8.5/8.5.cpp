#include <iostream>
#include<string>
using namespace std;

class student
{
private:
	int _id;
	string _name;

public:

	student(const string& name_in)
		//:_id(0), _name(name_in)
		//: student(0, name_in) //생성자가 아래 생성자를 가져다 사용할 수 있음[위임 생성자] --- default값을 다른것을 사용하려고 할때
	{
		init(0, name_in);
	}

	student(const int& id_in, const string& name_in)
		//: _id(id_in), _name(name_in)
	{
		init(id_in, name_in); //초기화 함수를 불러다 초기화를 해줌
	}

	void init(const int& id_in, const string& name_in) //만능 생성자 초기화 함수
	{
		_id = id_in;
		_name = name_in;
	}
	void print()
	{
		cout << _id << " " << _name << endl;
	}
};


int main()
{

	student std1(0, "coco");
	std1.print();


	student std2("Bill");
	std2.print();
	return 0;
}

