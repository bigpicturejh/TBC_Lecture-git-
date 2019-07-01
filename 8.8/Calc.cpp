#include"Calc.h"
using namespace std;

 Calc::Calc(int init_val)
	:_value(init_val) {}

Calc& Calc::add(int value) { _value += value; return *this; } //CalcŬ���� Ÿ�� ���۷����� ��ȯ, CalcŬ������ ���add���, Ŭ���� ����� ������ �����͸� dereferencing�Ͽ� ����

Calc& Calc::sub(int value) { _value -= value; return *this; }

Calc& Calc::mult(int value) { _value *= value; return *this; }

 void Calc::print()
{
	using namespace std; //������� using namepsace�� ������� �ʴ� ���� ����
	cout << _value << endl;
}
