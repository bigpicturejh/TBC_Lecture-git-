#include <iostream>
#include<cassert>
#include<array>
using namespace std;

//assert는 디버그모드에서 프로그램 테스트를 할때만 작동함.
//assert는 runtime에서 오류를 감지함
//static assert는 compile에서 오류를 감지함
void printVal(const array<int, 5> &arr, const int& idx)
{
	assert(idx >= 0);
	assert(idx <= arr.size() - 1);
	
	cout << arr[idx] << endl;
	
}


int main()
{

	array<int, 5> my_arr{ 1,2,3,4,5 };

	printVal(my_arr, 100);




	//const int num = 5;

	//assert(num == 5);
	
	
	int x = 5;
	const int y = 44;
	assert(x == 5);

	//static assert는 const 변수(compile 타임에 결정됨)에만 적용할 수 있다. 그리고 변수 뒤에 메세지를 남길 수 있음!!
	static_assert(y== 44, " s should be 44 ");

	return 0;
}

