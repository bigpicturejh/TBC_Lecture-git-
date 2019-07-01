#include <iostream>
using namespace std;

class simple
{
private:
	int _id;

public:
	simple(int id)
	{
		//this->setID(id);
		setID(id);
		cout << this << endl; // 모든 멤버함수는 자신만의 this포인터를 가지고 있음. 생성자도 하나의 함수이기 때문에 this를 가지고 있음

		//this->_id;
		_id;
	}

	void setID(int id) { _id = id; }
	int getID() { return _id; }
};

class Calc
{
private:
	int _value;

public:
	Calc(int init_val)
		:_value(init_val) {}

	//void add(int value) { _value += value; }
	//void sub(int value) { _value -= value; }
	//void mult(int value) { _value *= value; }

	Calc& add(int value) { _value += value; return *this; }
	Calc& sub(int value) { _value -= value; return *this; }
	Calc& mult(int value) { _value *= value; return *this;}

	void print()
	{
		cout << _value << endl;
	}
};


int main()
{

	simple s1(1); //각 인스턴스는 자신을 가르키는 포인터변수를 보이지 않게 가지고 있음
	simple s2(2);

	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;


	//simple::setID(&s2, 2) == s2.setID(2);  //**좌변은 개념적으로 포인터 주소가 넘어가고 변수가 넘어간다는 것을 의미, 우변은 실제 사용 문법


	Calc cal(10);
	Calc& temp1 = cal.add(10);
	Calc& temp2 = temp1.sub(1);
	Calc& temp3 = temp2.mult(2);
	temp3.print();

	cal.add(10).sub(1).mult(2).print();
	//cal.add(10);
	//cal.sub(1);
	//cal.mult(2);
	//cal.print();


	return 0;
}

