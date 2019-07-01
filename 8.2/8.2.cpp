#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Date
{
//public: //access specifier(접근지정자)

	int _month;
	int _day;
	int _year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input) //access function
	{
		_month = month_input;
		_day = day_input;
		_year = year_input;
	}

	void setMonth(const int& month_input) //setters
	{
		_month = month_input;
	}

	const int& getDay() //getters
	{
		return _day; //값을 리턴하는 경우 복사가 발생해서 성능에 영향을 미치기 떄문에 리턴타입을 레퍼런스로 해줌.
	}

	void copyFrom(const Date& origin)
	{
		_month = origin._month;
		_day = origin._day;
		_year = origin._year;
	}
};



int main()
{

	//Date today{ 8, 2, 2019 }; //instanciation
	//today._month = 8;

	Date today;
	today.setDate(8, 4, 2019);
	today.setMonth(10);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	
	return 0;
}

