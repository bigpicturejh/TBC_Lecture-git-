# include <iostream>

using namespace std;

enum class Color
{
	BLACK, 
	RED,
	BLUE, 
	GREEN
};

void printColor(Color color)

{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black";
		break;
	case 1:
		cout << "Red";
		break;
	case 2:
		cout << "Blue";
		break;

	}
	//switch (color)
	//{
	//case Color::BLACK:
	//	cout << "Black";
	//	break;
	//case Color::RED:
	//	cout << "Red";
	//	break;
	//case Color::GREEN:
	//	cout << "Green";
	//	break;

	//}
	cout << endl;

}


int main()

{
	
	//printColor(Color::BLUE);


	//{
	//	switch (x)
	//	{
	//		case 0:
	//			cout << "Zero";
	//			break;
	//		case 1:
	//			cout << "One";
	//			break;
	//		case 2:
	//			cout << "Two";
	//			break;

	//	}
	//	cout << endl;
	//}

	int x;
	cin >> x;

	switch (x)
	{
		int a;
		//int b=5;
		
	case 0:
	{	
		int y = 65;
	cout << y << endl;
	break; 
	}
	
	case 1:
		break;

	default:
		cout << "Undefined input" << endl;
		break;
	}


	return 0;
}