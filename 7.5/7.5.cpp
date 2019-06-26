
#include <iostream>
#include<array>
using namespace std;



int* getVal(int x)
{
	int val = x * 2;
	return &val;
}

int& getVal2(int x)
{
	int val = x * 2;
	return val;
}

int* allocMem(int size)
{
	return new int[size];
}

int& get(array<int, 100> & my_arr, int idx)
{
	return my_arr[idx];
}

//struct test
//{
//	int a, b, c, d;
//};

//test getStruct()
//{
//	test my_s{ 1,2,3,4 };
//
//}
tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return make_tuple(a, d);
}

int main()
{

	//////////Return by adress////////////
	int value = *getVal(2); //함수 내에서 사라질 주소의 값을 디레퍼런싱 해서 반환받기 때문에 코드 안정성 측면에서 디레퍼런싱의 리턴 타입은 좋지 않음.
	//int* value = getVal(2); //함수 내에서 사라질 주소의 값을 반환받기 때문에 코드 안정성 측면에서 디레퍼런싱의 리턴 타입은 좋지 않음.

	cout << value << endl;

	int* arr = allocMem(1024); //비 추천하는 동적 메모리 할당 방법
	delete[] arr;

	//////////Return by reference////////////
	int val2 = getVal2(5);
	cout << val2 << endl;

	int &val3 = getVal2(5); //함수값을 리턴받는 변수도 레퍼런스인 경우 함수 내 변수가 제거되었기 때문에 추후 변수 사용시 문제 발생 가능성이 있음.
	cout << val3 << endl;
	cout << val3 << endl;

	array<int, 100> my_arr; // 레퍼런스 반환값의 사용의 좋은 예시(메모리가 잡혀있는 경우)
	my_arr[30] = 10;

	get(my_arr, 30) = 1024;
	cout << my_arr[30] << endl;


	//////////Return by struct////////////
	//test ms = getStruct();
	//ms.a;
	//ms.b;


	//////////Return by tuple////////////
	//tuple<int, double> my_tp = getTuple();
	//get<0>(my_tp); //a
	//get<1>(my_tp); //d

	//cout << get<0>(my_tp) << endl;
	//cout << get<1>(my_tp) << endl;
	
	auto [a, d] = getTuple(); //C++ v.17에서 가능함(튜플 리턴값을 받기 위해 변수 a, d를 선언하면서 값을 받음)
	cout << a << endl;
	cout << d << endl;

	return 0;
}

