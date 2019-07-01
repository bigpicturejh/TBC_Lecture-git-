#include <iostream>
#include<string>
#include<vector>
using namespace std;

//** Object
//Friend: name, age.... ,print()
//Object들을 문법 구조로 구체화 한것이 Class

//struct Friend
//{
//
//	string name;
//	string address;
//	int age;
//	double height;
//	double weight;
//
//	//아래 print_info(const Friend& fr)이 구조체 멤버변수로 들어옴
//	void print_info()
//	{
//		cout << name << " " << address << " " << age << " " << height << " "
//			<< weight << endl;
//	}
//};

class Friend
{
public: //access specifier (public, private, protected)
	string m_name;
	string address;
	int age;
	double height;
	double weight;

	//아래 print_info(const Friend& fr)이 구조체 멤버변수로 들어옴
	void print_info()
	{
		cout << m_name << " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}
};
void print_info(const Friend& fr)
{
	cout << fr.m_name << " " << fr.address << " " << fr.age << " " << fr.height << " "
		<< fr.weight << endl;
}

void print_info(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " "
		<< weight << endl;
}


int main()
{
	
	Friend coco; //instanciation(클래스 instance를 초기화하는것) , coco is 'instance' of class
	coco.m_name = "cocopong";
	coco.address = "LA";
	coco.age = 23;
	coco.height = 1;
	coco.weight = 1.2;
	print_info(coco.m_name, coco.address, coco.age, coco.height, coco.weight);
	print_info(coco);

	coco.print_info();

	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int>	age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;
	//print_info(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	vector<Friend> my_friends;
	my_friends.resize(2);

	my_friends[0].print_info;
	my_friends[1].print_info;

	for (auto& idx : my_friends)
	{
		cout << idx.print_info << endl;;
	}
	return 0;
}

