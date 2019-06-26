#include <iostream>
#include <array>
#include<functional>
using namespace std;

int func(int x)
{
	return 6;
}

int coco(int y)

{
	return 10;
}



bool isEven(const int& num)
{
	if (num % 2 == 0) return true;
	else return false;
}
bool isOdd(const int& num)
{
	if (num % 2 != 0) return true;
	else return false;
}


//typedef bool (*check_func_t)(const int&) ;//함수포인터가 여러번 사용될 경우 typedef로 정의해서 사용
using check_func_t=bool (*)(const int&); //type ailias로도 사용할 수 있음

//void printNum(const array<int, 10> & my_arr, check_func_t check_func=isEven)
void printNum(const array<int, 10> & my_arr, function<bool(const int&)> check_func ) //#include<functional>을 사용해서 함수 포인터를 매개변수로 사용
{
	for (auto idx : my_arr)
	{

		if (check_func(idx) == true) cout << idx;
		//if (!print_even && idx % 2 != 0)cout << idx;
	}
	cout << endl;
}
int main()
{

	int (*funcptr)(int)=func;
	cout << funcptr(1) << endl;

	funcptr = coco; //함수 포인터는 중간에 다른 함수로 교체를 할 수 있음
	cout << funcptr(2) << endl;


	array<int, 10> my_arr = { 0,1,2,3,4,5,6,7,8,9 };
	printNum(my_arr, isEven); //함수 자체가 포인터임!!!!!!!!!!! 그래서 &가 필요 없음
	printNum(my_arr, isOdd);

	function<bool(const int&)> fcnptr = isEven;
	printNum(my_arr, fcnptr);
	fcnptr = isOdd;
	
	printNum(my_arr, fcnptr);

	return 0;
}

