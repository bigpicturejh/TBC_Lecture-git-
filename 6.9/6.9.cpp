
#include <iostream>
using namespace std;

int main()
{
	/*int val = 7;
	int* ptr = &val;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr -1) << endl;
*/

	//long long array[] = { 9,7,5,3,1 };
	//long long* ptr = array;
	//for (int i = 0; i < sizeof(array) / sizeof(long long); ++i)
	//{
	//	//cout << array[i] << " " << uintptr_t(&array[i]) << endl;
	//	cout << *(ptr + i) << " " <<uintptr_t(ptr+i) << endl;
	//}
	//


	char name[] = "coco";
	const int n_name = sizeof(name) / sizeof(char);


	char* ptr = name;
	for (int i = 0; i < n_name; ++i)
	{
		cout << *(ptr + i) ;
	}
	return 0;
}
