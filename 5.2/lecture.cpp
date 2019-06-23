# include<iostream>

using namespace std;

int main()
{
	//int x;

	//cin >> x;
	////curly braket이 없으면 if나 else문의 문장이 이어서 실행되지 않음!!

	//if (x > 10)
	//	cout << x << "is greater than 10" << endl;
	//else
	//{
	//	cout << x << "is less than 10" << endl;
	//	cout << "Test1" << endl;
	//}

	////////////////////////////////////////////////////////////////////////////
	//int x;
	//cin >> x;
	//
	//if (x > 10)
	//	; // null-statemnet 아무것도 하지 않음.


	////////////////////////////////////////////////////////////////////////////

	int x;
	cin >> x;

	if (x = 0)//비교 연산자 '=='를 정확히 쓰지 않을때 발생하는 문제: 조건문이 false가 되고 x값이 0으로 바뀜
	{
		cout << x << endl;
	}

	cout << x << endl;
	return 0;

}