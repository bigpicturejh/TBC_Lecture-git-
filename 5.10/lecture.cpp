#include <iostream>

using namespace std;

int getInt()
{
	while (1)
	{

		cout << "Put your input" << endl;
		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invalid number try again" << endl;
		}
		else
		{
			cin.ignore(32767, '\n');
			return x;

		}
	}
		
}

char get_operator()
{
	while (1)
	{
	
	cout << "CHoose your operator" << endl;
	char op;
	cin >> op;

	cin.ignore(32767, '\n');

	if (op == '+' || op == '-')
		return op;
	else
		cout << "try again" << endl;
    }

}

void printResult(int x, char op, int y)
{
	if (op == '+')
	{
		cout << x + y << endl;
	}
	else if(op=='-')
	
		cout <<x - y << endl;
	
	else
	{
		cout << "Fuck" << endl;
	}

}


int main()
{
	int x = getInt();
	char op = get_operator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}