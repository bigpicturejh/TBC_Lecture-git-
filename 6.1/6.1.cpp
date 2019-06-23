#include <iostream>
#include <math.h>

# define NUM_STUDENT 10000
using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum studentName
{
	Ho,
Yo,
TO,
Num_student,
};

int main()
{
	//int one_student_score;
	//int student_scores[5];


	//one_student_score = 100;

	//student_scores[0] = 100;
	//student_scores[1] = 90;
	//student_scores[2] = 30;
	//student_scores[3] = 20;
	//student_scores[4] = 10;

	////student_scores[5] = 20;

	//cout << (student_scores[0] + student_scores[1] )/ 2.0f << endl;

	////구조체 배열////
	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl;


	//rect_arr->length = 1;
	//rect_arr->width = 1;

	//int my_arry[] { 1,2,3 };// 배열 초기화;
	//int my_arry[]{ 1,2, }; / 배열 초기화 오른쪽, 뒤에 남겨두면 알아서 초기화 해줌
	//cout << my_arry[0] << endl;
	//cout << my_arry[1] << endl;
	//cout << my_arry[2] << endl;
	///*cout << my_arry[3] << endl;
	//cout << my_arry[4] << endl;*/
	

		//cout << my_arry[Ho] << endl;
	//cout << my_arry[Yo] << endl;
	//cout << my_arry[TO] << endl;

	//int student_Scores[Num_student];


	/*  Compile time에 배열의 사이즈가 정해져야함, runtime에 정해지면 안됨*/
	//int num_studnents = 0;
	const int num_student = 20;
	//cin >> num_studnents;

	int student_scores[NUM_STUDENT]; //매크로보다 동적할당으로 해결하는게 좋은 방법임!!(이 예제는 매크로를 사용함)

	int student_scores[num_student]; // 초기화된 값으로 배열 사이즈를 정할 경우 'const'로 정의된 변수를 사용해야함 !!!!!(68line 참조)

	return 0;

}
