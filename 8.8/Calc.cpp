#include"Calc.h"
using namespace std;

 Calc::Calc(int init_val)
	:_value(init_val) {}

Calc& Calc::add(int value) { _value += value; return *this; } //Calc클래스 타입 레퍼런스를 반환, Calc클래스의 멤버add명시, 클래스 멤버의 숨겨진 포인터를 dereferencing하여 리턴

Calc& Calc::sub(int value) { _value -= value; return *this; }

Calc& Calc::mult(int value) { _value *= value; return *this; }

 void Calc::print()
{
	using namespace std; //헤더에서 using namepsace는 사용하지 않는 것이 좋음
	cout << _value << endl;
}
