#include <iostream>
#include<string>
using namespace std;

//case2
void print2(string str) {}
void print2(char ch = ' ') {}

//case3
void print3(int x) {}
void print3(int x, int y = 20) {}

//case1
void print(int x = 10, int y = 20, int z = 300); //in header(declaration)

void print(int x, int y, int z)//헤더 선언 함수에 초기값이 있을 경우 구현된 함수에서는 초기값을 제거한다
{                              //(반대의 경우도 가능하지만 보통 헤더에 초기값 할당)
	cout << x << " " <<y<< " " <<z<<endl;
}


int main()
{

	//case1
	print(10);
	print(100, 20);
	print(200, 400, 500);
	print();

	//case2
	print2();//오버로딩의 경우 초기값이 할당되어있는 함수가 호출이됨

	//case3
	//print3(10); 함수 인자를 넘겨주는데 오버로딩 받는 함수가 모호한 경우가 발생할 수 있다.(int x, int y)처럼 y의 초기값을 없애면 빌드가능



	return 0;
}

