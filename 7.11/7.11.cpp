#include <iostream>
#include <vector>
using namespace std;

void printstakc(const vector<int>& st)
{
	for (auto& idx : st)
	{
		cout << idx << " ";

	}cout << endl;
}


int main()
{
	//int *v=new int[3]{1,2,3};
	vector<int> v{ 1,2,3 };

	//v.resize(10);
	//v.resize(2);
	//**vector -> size(프로그램에서 사용하는 메모리), capacity(전체 사용가능 메모리)

	v.reserve(1024); //원소가 추가될 경우 메모리를 새로 받아오는 절차가 없어서 속도가 빠름

	//for (auto& idx : v)
	//{
	//	cout << idx << " ";
	//}cout << endl;

	//cout << v.size() << " "<< v.capacity()<<endl;

	//cout << v[2] << endl;
	//cout << v.at(2)<< endl;

	//**vector는 속도를 중요시해서 resize를하면 원래 v의 메모리를 제거하지 않고 resize된 만큼의 데이터만 보내준다
	//**그래서 원래 v의 3번째 원소를 포인터를 사용해서 가져옴
	
	int* ptr = v.data();
	cout << ptr[2] << endl;

	//**vector를 사용해서 stack을 구현하면 reserve특성 덕분에 빠르게 원소를 추가/제거 할 수 있다는 장점이 있음.
	vector<int> stack;
	stack.push_back(3);
	printstakc(stack);

	stack.push_back(5);
	printstakc(stack);
	
	stack.push_back(7);
	printstakc(stack);
	
	stack.pop_back();
	printstakc(stack);
	
	stack.pop_back();
	printstakc(stack);
	
	stack.pop_back();
	printstakc(stack);
	return 0;
}

