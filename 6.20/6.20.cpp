
#include <iostream>
#include<array>
#include<algorithm>
using namespace std;

void printLen(const array<int, 5> & arr)
{
	cout << arr.size() << endl;

}

int main()
{


	array<int, 5 > my_arr =  {1,2,30,41,5};

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl;


	printLen(my_arr);
	for (auto& idx : my_arr)
	{
		cout << idx << " ";
	}cout << endl;


	sort(my_arr.begin(), my_arr.end());

	for (auto& idx : my_arr)
	{
		cout << idx << " ";
	}cout << endl;

	//역순정렬
	sort(my_arr.rbegin(), my_arr.rend());

	for (auto& idx : my_arr)
	{
		cout << idx << " ";
	}cout << endl;

	return 0;
}

