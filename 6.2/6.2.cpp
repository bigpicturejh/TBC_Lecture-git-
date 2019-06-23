
#include <iostream>
using namespace std;

void empty(int student_scores[20]) //배열을 함수 인자로 불러오면 복사를 해서 가져오기 때문에 메모리를 많이 차지하게 된다
{
	//cout << &student_scores<< endl;
	//cout << &student_scores[0] << endl;
	//cout << &student_scores[1] << endl;
	//cout << &student_scores[2] << endl;
	cout << "size in empty: " << sizeof(student_scores) << endl; //배열이 포인터로 함수에 전달된다 그래서 사이즈가 포인터 사이즈'8'로 나옴(64bit)
}

int main()
{
	const int num_students = 20;

	int student_scores[num_students]{ 10,20,30, };

	//cout << &student_scores << endl;
	/*cout << &student_scores[0] << endl;
	cout << &student_scores[1] << endl;
	cout << &student_scores[2] << endl;*/

	cout << "size in main: " << sizeof(student_scores) << endl;

	empty(student_scores);
/*
	cout << (int)&student_scores << endl;

	cout << (int)&student_scores[0] << endl;
	cout << (int)&student_scores[1] << endl;

	cout << sizeof(student_scores) << endl;*/
	return 0;
}

