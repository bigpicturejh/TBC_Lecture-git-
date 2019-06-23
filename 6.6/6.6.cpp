
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char myString[] = "combo";


	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}

	//cout << sizeof(myString) / sizeof(char) << endl;

	//char input[255];
	//cin >> input;

	//input[0] = 'A';
//	input[4] = '\0'; // \0는 null character를 나타냄. 문자열 출력은 null character이후는 출력을 안함.

	//cin.getline(input, 255); //getline은 띄어쓰기 공간을 입력으로 받아도 출력을 잘 해주는 역할을 함
	
	//int idx = 0;
	//while (1)
	//{
	//	if (input[idx] == '\0') break;
	//	cout << input[idx] << " " << (int)input[idx] << endl;
	//	++idx;


	//}


	char source[] = "get this";
	char dest[50];
	//strcpy_s(dest, source);

	/*cout << source << endl;
	cout << dest << endl;
*/
	//strcat_s(dest, source);
	//cout << source << endl;
	//cout << dest << endl;

	//cout << strcmp(source, dest) << endl;//두 문자열이 같으면 0을 출력 다르면 -1을 출력!!
	if (strcmp(source, dest) == 0)
	{

	}
	return 0;

}

