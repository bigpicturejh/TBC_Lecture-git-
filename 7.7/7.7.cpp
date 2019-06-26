
#include <iostream>
using namespace std;

typedef int my_int;

void print(int x){}
//void print(my_int x) {} //typedef를 써도 동일한 매개변수 타입이 있기때문에 빌드가 안됨

//case 1//
void print(const char* value) {}
void print(int value) {}

//case 2//
void print(unsigned int value) {}
void print(float value) {}

int add(int x, int y)
{
	return x + y;

}

double add(double x, double y)
{
	return x + y;
}

void getRandom(int &x) {}

void getRandom(double &x) {}

int main()
{
	//함수 오버로딩(complie할때 어느 함수를 사용할지 결정함!!!!!)
	//함수 오버로딩을 하려면 <리턴타입>과 <매개변수>가 달라야함
	add(1, 2);
	add(3.0, 4.0);

	int x;
	getRandom(x);

	//case 1//
	print(0);
	print("a");

	//case 2//
	//함수 오버로딩의 모호성을 제거하기 위해 입력 타입을 정확하게 명시
	print((unsigned int)'a');
	print(0u);
	print(3.141592f);

	return 0;
}

