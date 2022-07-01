// #include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream>
#include <bitset>

using namespace std;

// CPP의 시작점은 main 함수이다.
int main()
{
	const int __number = 15;
	cout << (10 <= __number || __number <= 20) << endl;
	cout << (!(__number <= 20)) << endl;
}