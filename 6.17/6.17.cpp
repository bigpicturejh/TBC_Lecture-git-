
#include <iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{

	
	 vector<int> fibo{ 1,2,3,4,5,6,7,8,4,4,4,4,4,4000,4,4,4,4,4,4 }; //벡터를 사용하면 동적할당 배열보다 편리하게 사용 가능

	 //int fibo[]{ 1,2,3,4,5,6,7,8,4,4,4,4,4,4000,4,4,4,4,4,4 };


	 int max_num = numeric_limits<int>::lowest();

	 //최대값 찾는 방법이 레퍼런스를 통해 간소화됨
	 for (const auto& num : fibo)
	 {
		 max_num = max(max_num, num);
	 }

	 cout << "MAX NUM is: " << max_num << endl;;


	//change array values
	//for (int& num : fibo) 아래 형식을 더 많이 써줌 (auto사용)
	for (auto& num : fibo)
		num *= 10;



	//output
	for (const auto &num : fibo)
		cout << num << " ";
	cout << endl;



	return 0;
}

