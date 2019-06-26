
#include <iostream>
using namespace std;

typedef int* intptr;

void coco(const int* ptr)
{

	cout << ptr << " " << *ptr << endl;

	*ptr = 10;
}


void vovo( int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
		arr[0] = 1.0;
	}
}
int main()
{
	//int val = 5;
	//cout << val << " " << &val << endl;

	//int* ptr = &val;

	//cout << &ptr << endl;

	//coco(ptr);
	//coco(&val);
	////coco(4);



	return 0;
}

