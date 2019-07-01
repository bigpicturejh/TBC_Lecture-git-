#include <iostream>
using namespace std;

class st
{

public: 
	//static int _val = 0;// static 멤버 변수는 초기화가 불가능!!!!
	static int _val ;

	static const int _val2=1;
	static constexpr int _val3 = 2; //constexpr 은 값이 compile time에 결정이 되어야함
};

int st::_val = 1; //멤버가 static이기 떄문에 메모리에 정적으로 존재함
                  //[static변수는 header가 아닌 cpp파일에 정의해야 compile오류를 피할 수 있음!, 정의는 한곳에 있어야 한다는 원칙 때문]


int generateID()
{
	static int s_id = 0;
	return ++s_id;
}

int main()
{
	//cout << generateID() << endl;
	//cout << generateID() << endl;
	//cout << generateID() << endl;

	cout << &st::_val << " " << st::_val << endl; //멤버 변수가 static이기 때문에 instance가 없어도 주소값을 가지고 있음
	st st1;
	st st2;

	st1._val = 2;

	cout << &st1._val << " " << st1._val << endl;
	cout << &st2._val << " " << st2._val << endl;

	st::_val = 1024;//멤버 변수가 static이기 때문에 계속 동일한 주소값을 가지고 값도 변환이 가능함
	cout << &st::_val << " " << st::_val << endl;
	return 0;
}

