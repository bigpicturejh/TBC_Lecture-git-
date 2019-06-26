
#include <iostream>
using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{

	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;


	//inline으로 처리된 함수를 컴파일러가 다음과 같이 작동해줌(함수 호출을 하지 않음)
	//최신 컴파일러는 자동으로 inline으로 동작하게끔 해줌
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;
	return 0;
}

