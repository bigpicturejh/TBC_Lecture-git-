#include <iostream>
using namespace std;


class A
{
public:

	int _val;

	A(const int& inval)
		:_val(inval)
	{
		cout << "CS" << endl;
	}
	~A()
	{
		cout << "DS" << endl;
	}

	void print()
	{
		cout << _val << endl;
	}

	void printDouble()
	{
		cout << _val * 2 << endl;
	}
};

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }

};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents()+c2.getCents());
}

int main()
{

	//A a(1);
	//a.printDouble();

	//A(1).printDouble();
	//a.print();

	//A().print();//위와같이 클래스를 객체로 선언하고 함수를 사용하기 번거로울떄 R-value로 작동을 하게 클래스를 사용
	//          //익명객체를 사용할 경우 재사용이 불가능함

	cout << add(Cents(10), Cents(12)).getCents() << endl;
	
	return 0;
}

