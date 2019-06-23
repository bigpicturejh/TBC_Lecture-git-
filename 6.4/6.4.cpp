#include <iostream>
using namespace std;

void printarr(const int array[], const int length)
{

	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << " ";
	}cout << endl;
}

int main()
{
	const int length = 5;

	int array[length]{ 3,5,2,1,4 };


	printarr(array, length);


	for (int i = 0; i < length-1; ++i)
	{
		int minIdx = i;

		for (int j = i + 1; j < length; ++j)
		{
			if (array[minIdx] > array[j])
			{
				minIdx = j;
			}
		}

		int temp = array[minIdx];
		array[minIdx] = array[i];
		array[i] = temp;

		printarr(array, length);
	}

	return 0;

}
