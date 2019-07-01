#include <iostream>
using namespace std;

class simple
{
private:
	int _id;

public:
	simple(const int& id_in)
		:_id(id_in)
	{
		cout << "Constructor" << _id << endl;
	}
	~simple()// 소멸자는 파라미터가 없음
	{
		cout << "Destructor " << _id << endl;
	}
};


class Intarr
{
private:
	int* _arr = nullptr; // 소멸자에서 delete를 사용해 메모리 해제하는 과정을 피하기 위해 vector를 사용하는것도 좋은 방법임
	int _len = 0;

public:
	Intarr(const int len_in)
		:_len(len_in), _arr(new int[_len])
	{
		//cout << "Constructor" << endl;
	}
	~Intarr()
	{
		if(_arr!=nullptr) delete[] _arr; //메모리 누수 방지를 위해 동적할당을할 경우 소멸자에서 메모리 할당을 해제해준다
	}

	int size()
	{
		return _len;
	}

	
};
int main()
{
	/*simple* s1 = new simple(0);
	simple s2(1);

	delete s1;
*/

	while (1)
	{
		Intarr my_int_arr(1000); //memory leak발생(delete가 없으므로)-->소멸자에서 delte를 통해 while문을 빠질때마다 메모리를 반납하도록함
		
	}

	return 0;
}

