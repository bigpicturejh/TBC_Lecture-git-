#include <iostream>
#include<cstdarg>
using namespace std;

double findavg(int cnt, ...)
{

	double sum = 0;

	va_list list;

	va_start(list, cnt);

	for (int arg = 0; arg < cnt; ++arg)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / cnt;

}


int main()
{

	cout << findavg(1, 1, 2, 3, "By", "Yo") << endl;
	cout << findavg(3, 1, 2, 3) << endl;
	cout << findavg(5, 1, 2, 3, 4, 5) << endl;
	cout << findavg(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}

