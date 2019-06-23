#include <iostream>
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{

	Person person;

	//일반적인 구조제 변수 접근방법
	person.age = 5;
	person.weight = 60;

	//레퍼런스로 구조체 변수 접근방법
	Person &ref = person;
	ref.age = 15;

	//포인터로 구조체 변수 접근방법
	Person* ptr = &person;
	ptr->age = 59959; //포인터로 선언된 구조체의 멤버변수는 화살표로 접근가능
	ptr->weight = 2020;
	(*ptr).age = 2040404; //디레퍼런싱으로 접근가능


	Person& ref2 = *ptr;//포인터를 디레퍼런싱해서 레퍼런스로 사용하는 방법
	ref2.age = 45;
	
	cout << &person << endl;
	cout << &ref2 << endl;


	return 0;
}

