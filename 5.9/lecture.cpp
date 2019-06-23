# include <iostream>
# include<cstdlib>//std::rand(), std::srand()
# include <ctime>
#include<random>
using namespace std;

unsigned int PRNG()
{
	static unsigned int seed = 5223;

	seed = 89123812 * seed + 12412;
	return seed % 31234;

}
int getRandomNumber(int min, int max)
{
	 const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


int main()
{
	//srand(3535);
	////srand(static_cast<unsigned int>(time(0)));
	//
	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << getRandomNumber(5, 8) << '\t';

	//	if (count % 5 == 0) cout << endl;
	//	}

	random_device rd;
	mt19937_64 mesenne(rd()); //create a mesenne twister
	uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;

	}

	return 0;
}