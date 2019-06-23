
#include <iostream>
using namespace std;

int main()
{
	//const int len = 5; //정적할당을 할 경우 변수가 const로 지정되어야함, cin으로 받을 수 없음.
	//int array[len];

	int len;
	cin >> len;
	int* array = new int[len](); //배열사이즈 뒤에 ()넣으면 0으로 초기화됨. 
	//int* array = new int[len] {1,2,3,4,5}; //Uniform initialization을 하면 값을 넣어서 초기화 하고 남은 배열은 0으로 채움.
	
	array[0] = 1;
	array[1] = 10;

	for (int i = 0; i < len; ++i)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << sizeof(& array[i]) << endl;
		cout << array[i] << endl;
	}
	delete [] array;
	
    


	int fixedarr[] = { 1,2,3,4,5 };
	int* arr = new int[5]{ 1,2,3,4,5 };
	//int* arr = new int[]{ 1,2,3,4,5 }; //[]로 두면 컴파일 타임에 배열 크기를 결정하지만 동적할당의 경우 컴파일타임에 결정하지 않으려하기 때문에 빌드 오류발생
	
	

	delete[] arr;




	return 0;

}

