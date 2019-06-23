#include <iostream>


#if defined(_MSC_VER) //c++ 14
#endif
using namespace std;

int main()
{
	const int row = 3;
	const int col = 5;

	//int array[][col] 
	//{
	//	{1,2,},
	//	{6,7,8,9,10},
	//	{11,12,13,14,15}
	//};


	//for (int i=0; i < row; ++i)
	//{
	//	for (int j=0; j < col; ++j)
	//		cout << array[i][j] << '\t';
	//	//cout << (int)&array[i][j] << '\t';
	//}


	int array[5][4][3];
    
	return 0;
}
