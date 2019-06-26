#include <iostream>
using namespace std;

void countDown(int cnt)
{
	
	cout << cnt<< endl;

	
	//**재귀함수를 사용하면 반드시 종료조건을 지정해야함(stack overflow문제가 발생할 수 있음)
	if(cnt>0)
		countDown(cnt - 1);
}

int sumAll(int ele)
{
	if (ele <= 0)
	{
		return 0;
	}
	else if (ele <= 1)
	{
		return 1;
	}
	else
	{
		const int temp_sum = sumAll(ele - 1);
		cout << temp_sum << endl;
			return temp_sum + ele;
			
	}
		
}

int main()
{

	cout << sumAll(10) << endl;
	//countDown(5);


	return 0;
}

