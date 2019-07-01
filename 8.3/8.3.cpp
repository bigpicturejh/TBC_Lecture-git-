#include <iostream>
using namespace std;

class Fraction
{
	int _numberator;
	int _denominator;

public:
	//Fraction() {} //생성자를 만들지 않아도 프로그램 내부적으로 왼쪽과같이 빈 생성자를 만든다
	/*Fraction()
	{
		_numberator = 1;
		_denominator = 1;
	}*/


	Fraction(const int& num_in=1, const int& den_in=1) //constructor [외부에서 호출할때 사용하는 함수가 아니고 생성자로서 초기화 하는데 사용됨]
	{
		_numberator = num_in;
		_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << _numberator << " / " << _denominator << endl;
	}
};

class second
{
public:
	second()
	{
		cout << "class second constructor()" << endl;
	}
};
class first
{
	second sec;

public:

	first()
	{
		cout << "class first constructor()" << endl;
	}
};


int main()
{

	//Fraction frac; //생성자의 파라미터가 하나도 없을경우 instance뒤에 ()를 빼도록 함!!!!(암기사항)
	//
	//frac.print();

	//Fraction one_third{ 1,3 }; //uniform initialization이 엄격한 초기화를 적용할 수 있음(e.g., {1.0, 3}으로 하면 double이기 때문에 빌드 오류 발생)
	//Fraction one_third( 1,3 );
	//one_third.print();

	first fir;//클래스 안에 다른 클래스가 멤버로 들어있는 경우 멤버의 클래스가 먼저 초기화됨!!

	return 0;
}

