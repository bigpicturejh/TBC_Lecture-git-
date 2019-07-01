#include <iostream>
using namespace std;



class Fruit
{

public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

private:
	FruitType _type;

public:
	Fruit(FruitType type) :_type(type)
	{

	}


	FruitType getType() { return _type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "apple" << endl;
	}
	return 0;
}

