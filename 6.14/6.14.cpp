
#include <iostream>
using namespace std;

void ds(int &n)
{
	n = 10;
	cout << "In DS function " <<n<< endl;
}
void printele(int (&arr)[5]) //레퍼런스 배열이 함수 인자로 넘어올 경우 배열 사이즈는 꼭 지정해줘야함 '[]'이런식으로 두면 오류 발생.
{
	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}
struct st1
{
	int v1;
	float v2;

};

struct st2 {
	st1 st;
};
int main()
{

	int val = 5;
	int* ptr = nullptr;
	ptr = &val;


	int& ref = val;

	cout << ref << endl;

	ref = 10;
	cout << val << " " << ref << endl;


	cout << &val << endl;
	cout << &ref << endl; //레퍼런스 변수 자체가 변수의 주소를 사용한다.(이름만 다름)
	cout << ptr << endl;
	cout << &ptr << endl;

	int x = 5;
	int& ref2=x; //레퍼런스는 반드시 초기화가 되어야 함.


	const int y = 8;
	//int& ref3 = y; //const변수를 레퍼런스로 사용할 수 없음!!
	const int& ref3 = y; 


	/////////////////////////////////////////////////////////////////////////////////////////////////////
	int val2 = 10;
	int val3 = 33;

	int& valref = val2;
	cout << valref << endl;

	valref = val3;
	cout << valref << endl << endl;

	/////////////////////////////////////////////////////////////////////////////////////////////////////
	int k = 5;
	cout << k << endl;
	
	ds(k); //레퍼런스로 함수 인자가 전달되면 변수 자체의 주소값이 전달된다. 함수에 포인터가 넘어가면 복사가 한번 되지만 레퍼런스는 아님.(중요******)
	cout << k << endl;

	   	 



	/////////////////////////////////////////////////////////////////////////////////////////////////////

	const int len = 5;
	int arr[len]{ 1,2,3,4,5 };

	printele(arr);


	/////////////////////////////////////////////////////////////////////////////////////////////////////
	st2 test_st;

	int& v1 = test_st.st.v1; //구조체 안에 구조체의 이름이 복잡한 변수에 접근할때 레퍼런스로 정의해서 사용할 수 있음
	 v1= 1.0;


	return 0;
}

