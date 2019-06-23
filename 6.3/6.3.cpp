
#include <iostream>
#include<limits.h>

using namespace std;


int main()
{
	//const int num_student = 5;


	int scores[]{ 55, 45, 65, 15, 25 };

	const int num_student = sizeof(scores) / sizeof(int); //파라미터로 넘어간 배열의 경우 포인터 사이즈이기 때문에 이 방법으로 배열의 크기를 구하면 안됨

	int max_score = 0;
	int min_score = INT_MAX;
	int total_score = 0;
	for (int i = 0; i < num_student; ++i)
	{
		total_score += scores[i];
		max_score = (max_score < scores[i]) ? scores[i] : max_score;
		min_score = (min_score > scores[i]) ? scores[i] : min_score;
	}


	double avg_score = static_cast<double>(total_score) / num_student;
	cout << avg_score << endl;
	cout << max_score<< endl;
	cout << min_score << endl;

	//int score0 = 55;
	//int score1 = 45;
	//int score2 = 65;
	//int score3 = 15;
	//int score4 = 25;

	//int total = score0 + score1 + score2 + score3 + score4;

	

}

