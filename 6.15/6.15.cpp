#include <iostream>
using namespace std;


void ds(const int& x)
{
	cout << x << endl;
}


int main()
{
	const int x = 5;
	const int &ref_x = x;
	const int& ref_2 = ref_x;

	const int& order = 10; // const를 빼면 레퍼런스에 리터럴 상수로 초기화가 안되지만 const가 있으면 가능함!!
	cout << order << endl;
	cout << &order << endl;

	int a = 1;

	ds(a);
	ds(1);//함수 파라미터로 레퍼런스를 사용하면 리터럴을 함수 입력 변수로 사용할 수 있음.
	ds(a + 4);

	return 0;
}

