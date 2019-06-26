#include <iostream>
#include<string>
using namespace std;




int main()
{

	// semantic errors

	int x;
	cin >> x;

	if (x >= 5)
		cout << " x is greater than 5" << endl;

	// violated assumption
	string hello = "cococoo bye";
	while (1)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Error !" << endl;
	}

	return 0;
}

