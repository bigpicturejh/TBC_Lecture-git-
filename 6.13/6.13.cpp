
#include <iostream>
using namespace std;

int main()
{
	const int val = 5;
	const int* ptr = &val; 
	//*ptr = 6;
	cout << *ptr << endl;


	int val2 =10;
	const int* ptr2 = &val2; 
	//*ptr = 6;
	val2 = 6;

	cout << *ptr2 << endl;
	
	int val3 = 100;
	const int* ptr3 = &val3; //포인터 앞에 const가 붙으면 ptr3의 주소값은 바꿔도 무방하지만 주소값에 있는 값은 바꾸지 않겠다는 의미. cont...
	
	int val4 = 200; 
	ptr3 = &val4; //그래서 ptr3에 다른 "주소값"(vla4)이 할당이 됨. 단, val3의 값은 바꿀수 없음!!!!(************중요***********)
	

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "ptr3 is ";
	cout << *ptr3 << endl;

	int com = 44;
	int* const ptrcom = &com; //포인터 자체가 상수로 동작함
	*ptrcom = 444; //const가 포인터(ptrcom)앞에 붙어있는 경우 위의 경우와 다르게 역참조를통해 포인터가 가르키는 값을 바꿀 수 있음.

	int com2 = 55;
	//ptrcom = &com2;// const가 포인터(ptrcom)앞에 붙어있는 경우 위의 경우와 다르게 포인터 주소값 자체를 바꾸지 못하므로 다른 변수의 주소 할당이 불가능함.

	cout << *ptrcom << endl;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int test = 4;
	const int* const testptr=&test;
	


	return 0;
}

