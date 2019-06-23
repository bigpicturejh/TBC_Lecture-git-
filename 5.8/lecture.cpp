# include<iostream>

using namespace std;

void breakOrreturn()

{


	while (1)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
		{
			break;
		}
		else if (ch == 'r')
		{
			return ;
		}
	}

	cout << "end" << endl;
}


int main()
{
	//breakOrreturn();
	/*
	int count = 0;

	while (1)
	{

		cout << count << endl;
		if (count == 10) break;
		count++;
	}*/
		
/*
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;

		cout << i << endl;
	}*/

	int count(0);
	bool exit_flag = 0;

	while (!exit_flag)
	{
		char ch;
		cin >> ch;



		cout << ch << " " << count << endl;

		if (ch == 'x')
		{
			exit_flag = 1;
		}
	}



	return 0;
}