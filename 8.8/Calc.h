#pragma once
#include<iostream>



class Calc
{
private:
	int _value;

public:
	Calc(int init_val);

	//void add(int value) { _value += value; }
	//void sub(int value) { _value -= value; }
	//void mult(int value) { _value *= value; }

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);

	void print();
};

