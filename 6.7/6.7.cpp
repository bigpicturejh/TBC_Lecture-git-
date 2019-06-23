
#include <iostream>
using namespace std;

struct something
{
	int a, b, c, d;
};


int main()
{
	int x = 5;
	double d = 1.0;
	 //de-reference opertor(*)

	//typedef int* pint; //정수형 포인터 타입을 정의해서 사용하는 경우에만 쉼표 이후 (*)없이 변수 선언 가능
	//pint ptr_x;
	//pint ptr_x, ptr_y;

	int *ptr_x = &x, *ptr_y = &x;
	double *ptr_d = &d;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	
	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << typeid(ptr_x).name() << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ptr_x) << " "<<sizeof(&x)<<endl;
	cout << sizeof(ptr_d) << " " << sizeof(&d) << endl << endl;

	something ss;
	something* ptr_s;

	cout << sizeof(something) << endl;
	cout << sizeof(ptr_s) << endl; //주소의 크기는 데이터 크기와 무관하게 일정하다(64bit의경우 8Byte)


	int* ptr_tr;
	cout << *ptr_tr << endl; //포인터의 초기화를 하지 않고 de-reference를 하며 쓰레기값이 있어서 오류를 발생한다

	return 0;

}

