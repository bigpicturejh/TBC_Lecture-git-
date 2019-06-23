

#include <iostream>
using namespace std;


const char* getnemae()
{
	return "coco";
}



int main()
{
	//char* name = "coco";
	//const char* name = "coco"; //const를 앞에 넣으면 string임에도 불구하고 포인터로 받을 수 있다.
	//const char* name2 = "coco"; 

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl; //name과 변수명이 다른 포인터임에도 불구하고 문자열이 같기때문에 컴파일러가 동일한 메모리를 할당해줌(글자 하나만 달라도 다른 메모리를 할당해줌)


	//const char* name = getnemae(); //함수의 리턴 타입으로도 문자열 입력을 받을 수 있음
	//const char* name2 = getnemae();

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;

	//int arr[5]{ 1,2,3,4,5 };
	//char char_arr[] = "Bye";
	//const char* name = "coco";

	//cout << arr << endl;
	//cout << char_arr << endl; //cout이 문자열 포인터의 경우 주소가 아닌 문자열을 출력해준다(정의)
	//cout << name << endl;

	char c = 'q';
	cout << &c << endl; //메모리에서 문자열 c에 대해 char데이터 만큼 메모리를 할당하고 null이 나올때까지 문자열을 출력해서 뒤에 쓰레기 값도 나옴
	return 0;

}



