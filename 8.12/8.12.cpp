#include <iostream>
using namespace std;

class A; //전방선언(forward declaration)

class B
{

private:
	int _val = 2;

	friend void ds(A& a, B& b);

public:
	void ds2(A& a); //ds2라는 함수가 있다는것을 전방선언해줌
};

class A
{

private:
	int _val = 1;

	friend void ds(A& a, B& b); //class A에서 classB의 정보를 알 방법이 없으므로 전방선언을 통해 컴파일러에게 미리 알려줌

	//friend class B; // Class B에서 private 멤버에 접근 가능
	friend void B::ds2(A& a); //B 클래스 전체를 friend로 선언하기 싫은경우 (보안상...)


};


void B::ds2(A& a) 
{
	cout << a._val << endl; //선언과 정의를 위와같이 분리하면 class B에서도 class A의 private멤버 변수에 함수를 통해 접근이 가능함
}


void ds(A& a, B& b)
{
	cout << a._val << endl; //private멤버 변수에 접근하고자할때는 이 함수를 위에서와 같이 friend로 선언해준다
	cout << b._val << endl;
}



int main()
{
	A a;
	B b;
	
	b.ds2(a);

	return 0;
}

