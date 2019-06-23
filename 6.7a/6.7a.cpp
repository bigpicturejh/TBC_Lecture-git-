
#include <iostream>
#include<cstddef>

using namespace std;

void dosomethign(double* ptr)
{
	cout << "Add of pointer variable in function" << &ptr << endl;

	if (ptr != nullptr)
	{
		//do something useful
		cout << *ptr << endl;

	}
	else
	{
		cout << "nothing-_-" << endl;
	}
}
int main()
{
    
	double* ptr = nullptr;

	dosomethign(NULL);
	dosomethign(ptr);

	double d = 123.4;
	dosomethign(&d);
	

	nullptr_t nptr; //#include <cstddef>

	cout << "Add of pointer variable in main" << &ptr << endl;
	

	return 0;
}
