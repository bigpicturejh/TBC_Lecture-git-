
#include <iostream>
using namespace std;

//prototype of function
int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
}// x and y are destroyed here!!


int main()
{
	int x(1), y(2);

	foo(6, 1); //6, 7: arguments
	foo(x, y + 112);


	return 0;
}

