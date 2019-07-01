#include <iostream>
using namespace std;

class st
{

	class _init
	{
	public:
		_init()
		{
			_val = 1234;
		}

	};

private:
	static int _val;
	int _val2;

	static _init _initializer;

public:
	

	
	st()
		:_val2(123) //_val(1023)
	{}
	 static int getVal()
	{
		return _val;
		//return this->_val; //static은 this를 사용할 수 없음
	}

	 int temp()
	 {
		 //return this->_val+this->_val2; // this 포인터를 써서 이렇게도 가능
		 return this->_val;
	 }

};

int st::_val = 102;
st::_init st::_initializer; //inner class에서 static멤버 변수를 초기화함

int main()
{

	cout << st::getVal()<< endl; // _val이 private에서 static변수이므로 static 함수를 통해 특정 instance없이 변수에 접근할 수 있음

	st st1, st2;
	cout << st1.getVal() << endl;
	//cout << st1._val << endl;

	int (st:: * fptr1)() = &(st::temp); //클래스 멤버 함수는 instance가 생성되어도 동일한 주소값을 가지고 있음

	cout << (st2.*fptr1)() << endl; //static이 아닌 멤버 함수는 instance에 종속이 되어있기 때문에 instance의 this 포인터를 통해 멤버 함수에 접근


	int (*fptr2)() = &st::getVal;
	cout << fptr2() << endl;


	return 0;
}

