
#include <iostream>

int pow(int base, int exp)
{

	int result = 1;

	for (int count = 0; count < exp; ++count)
	{
		result *= base;
	}

	return result;
}


int main()

{
	using namespace std;

	//cout << pow(2, 4) << endl;
	//int count = 0;
	//for (; count < 10; ++count)
	////for (; ;++count) //무한루프
	//{
	//	cout << count << endl;
	//}

	for (int i = 0, j = 0; (i+j) < 10; ++i, j+=2)
	{
		cout << i << " " << j << endl;
	}
	

	return 0;
}