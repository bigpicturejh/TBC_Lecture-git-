
#include <iostream>
using namespace std;

//void pointer == generic pointer (definition)

int main()
{

	int k = 5;
	float x = 3.0f;
	char d = 'ok';

	void* ptr = nullptr;

	ptr = &k;
	ptr = &x;
	//ptr = &d;

	cout << &x << " " << ptr<<endl;
	//cout << *ptr << endl; //void point의 경우 디레퍼런싱이 안됨. 아래처럼 강제 캐스팅을 해서 디레퍼런싱 해야함.
	cout << *static_cast<float*>(ptr) << endl;
	return 0;
}

