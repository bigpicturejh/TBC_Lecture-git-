
#include <iostream>
using namespace std;

//void printArray(int array[])
struct Mystruct
{
	int array[5]{ 9,7,5,3,1 };
};

void printArray(int *array)
{
	cout << sizeof(array) << endl; //변수로 넘겨받은 배열도 내부적으로 포인터와 동일하다. 그래서 사이즈가 포인터 사이즈와 동일함
	cout << *array << endl;

	*array = 100;
}
void dosome(Mystruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}

int main()
{
	//int array[5]{ 9,7,5,3,1 };


	//cout << array << endl; //배열도 포인터다!
	//cout << &array[0] << endl;

	//cout << *array << endl;

	//int* ptr = array;
	//cout << ptr << endl;
	//cout << *ptr << endl << endl << endl;

	/*char name[] = "coco";
	cout << name << endl;
	cout << *name << endl;*/

	//cout << sizeof(array) << endl;

	//int* ptr = array;
	//cout << sizeof(ptr) << endl;

	//printArray(array);

	//cout << array[0] << " "<<*array<<endl; //포인터를 이용해서 배열 값을 다른 함수에서 바꿔도 그 값이 원래 배열 값에 적용된다!!

	//cout << *ptr << " " << *(ptr + 1) << endl;

	Mystruct ms;
	cout<<ms.array[0] << endl;

	cout << sizeof(ms.array) << endl;
	dosome(&ms); // 배열이 클래스나 구조체에 있을 경우 포인터를 통해 넘겨주면 포인터 값이 아닌 배열 자체의 값이 전달된다(함수에 있을때랑 다름)
	return 0;
}

