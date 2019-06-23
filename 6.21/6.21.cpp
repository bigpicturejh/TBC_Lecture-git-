
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	//array<int, 5> arr;
	vector<int> arr;
	vector<int> arr2{ 1,2,3,4,5 };

	cout << arr2.size() << endl;


	vector<int> arr3{ 1,2,3,};
	cout << arr3.size() << endl;

	vector<int> arr_test{ 1,2,3,3,3,3,3 };
	for (auto& idx : arr_test)
	{
		cout << idx << " ";
	}cout << endl;

	arr_test.resize(10);

	cout << arr_test.size() << endl;
	cout << arr_test[3] << endl;
	//cout << arr.at(9) << endl;

	
	return 0;
}

