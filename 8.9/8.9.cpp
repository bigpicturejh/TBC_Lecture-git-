#include <iostream>
#include<string>
using namespace std;

class st
{

private:

public:
	int _val = 0;
	string _val2 = "default";

	// 함수 오버로딩을 할떄 const가 있으면 메인함수에서 호출할때도 const로 선언된 instance를 통해 호출됨.
	const string& getValue() const { cout << "const version" << endl; return _val2; }
	string& getValue() { cout << "normal version" << endl; return _val2; }

	//다른 함수에 매개변수로 들어갈떄 복사 constructor를 통해 초기화를 해줌(아래 코드는 c++자체적으로 자동 생성해주지만 시각화 하기 위해 구현)
	st(const st& st_in)
	{
		_val = st_in._val;
		cout << "Copy constructor" << endl;
	}

	st()
	{
		cout << "Constructor" << endl;

	}

	void setVal(int val)
	{ 
		_val = val; 
	}
	int getVal() const // 클래스 멤버 함수가 const가 됨. 즉, 이 함수 안에서 멤버 변수를 변환하지 않겠다는 의미
	{ 
		return _val;
	}
};

//void print(st sting)--> 복사 constructor수행됨
void print(const st& sting) //복사 constructor수행 안됨
{
	cout <<"In Print:" <<&sting << endl;
	cout << sting.getVal() << endl;
}

int main()
{
	//const st sting;
	//sting.setVal(10); --> const이기 때문에 잘못된 방법

	//cout << sting.getVal() << endl; // class getVal에 const선언이 되어있기 때문에 가능. 없으면 오류 발생

	//st sting_print;

	//cout << "In main:" <<&sting_print << endl;

	//print(sting_print); //복사 constructor를 통해 멤버 변수를 초기화해준다. print라는 함수의 매개변수로 들어간 값은 복사가 되는데 이때 복사 constructor사용.

	st sting2;
	sting2.getValue()="CoCo";
	cout << sting2._val2 << endl;

	const st sting_over;
	sting_over.getValue();// == "Box" xxxx

	return 0;
}

