
#include <iostream>
#include<cmath> //sin(), cos()
#include<vector>
using namespace std;

void add(int& y)
{
	cout << y << " " << &y << endl; //참조에 의한 호출은 변수 자체 주소가 넘어온다 (함수 내에서 복사를 안함!!)
	y = y + 1;

}

void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592; //static을 사용하면 함수 내에서 변수가 재 정의 되지 않고 계속해서 사용할 수 있음
	const double radians = degrees * pi / 180.0;
	sin_out = sin(radians);
	cos_out = cos(radians);

}

typedef  int* intptr;//포인터 변수를 함수 인자로 받을때 이해를 돕기 위해 사용
//void foo(int *&x)
void foo(intptr & x)
{

	cout << x << " " << &x<<endl;
}

//void printele(int (&arr)[4])
void printele(const vector<int>&arr2)
{
	for (auto &idx : arr2)
	{
		cout << idx << " ";
	}
	cout << endl;
}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	add(x);

	cout << x << " " << &x << endl;


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos); //call by reference방법을 사용하면 함수에서 1개 이상의 출력을 받아낼 수 있음(우회적 방법)


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int kk = 4;
	//int* ptr = &kk;
	intptr ptr = &kk;
	foo(ptr);
	cout << ptr << " " << &ptr << endl;


	int arr[]{ 1,2,3,4 };
	//printele(arr);

	vector<int>arr2{ 1,2,3,4 };
	printele(arr2);

	return 0;
}

