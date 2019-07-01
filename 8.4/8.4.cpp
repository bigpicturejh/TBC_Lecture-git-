#include <iostream>
using namespace std;

class B
{

	int _b;

public:
	B(const int& b_in)
		:_b{ b_in }
	{

	}
};
class st
{
private:
	//멤버 변수 초기화를 해줘도 생성자가 있으면 생성자의 값을 우선 사용해 초기화를 한다 (Priority 3)
	int _i=100;
	double _d=100.1;
	char _c='F';
	int _arr[4] = { 1,2,4,4 };
	B _b{ 256 };


public:
	st()
		//:_i(1), _d(4.14), _c('d') //initialization list
		: _i{ 1 }, _d{ 4.14 }, _c{ 'd' }, _arr{ 1,2,3,4 }, _b{ _i - 1 } //initialization list (Priority 2)

	{
		//생성자의 initialization list이후에 초기화값을 다시 해주면 이를 다시 초기화 값으로 사용한다. (Priority 1)
		_i = 1;
		_d = 3.1114;
		_c = 'ddd';
	}

	void print()
	{

		cout << _i << " " << _d << " " << _c << endl;
		for (auto& idx : _arr)
		{
			cout << idx << " ";
		}cout << endl;
	}
};

int main()
{
	st som;
	som.print();


	return 0;
}

