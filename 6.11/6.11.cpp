#include <iostream>
using namespace std;

int main()
{

	//int array[1000000]; //정적 메모리는 stack으로 할당됨. (용량 적음)

	int* ptr = new int{ 7 };
	//int* ptr = new (nothrow)int{ 7 }; //할당할 메모리가 부족해도 오류를 발생시키지 않고 nullptr을 할당하고 프로그램을 계속 진행시킴.(nothrow)


	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr; //메모리를 반납하고 해당 주소에 값이 비었음을 알려주도록 다음 줄도 항상 붙어서 다닌다.
	ptr = nullptr;

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{

		cout << ptr << endl;
		cout << *ptr << endl;
	}



	///////ㅡㅡ Memory leak problem/////////////////
	while (1)
	{
		int* ptr2 = new int; //메모리 할당만하고 delete를 하지 않으면 메모리 사용률이 계속해서 증가하는 문제가 발생함
		cout << ptr2 << endl;

		//delete ptr2;
	}


	return 0;

}

