// #include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream>

using namespace std;

// CPP의 시작점은 main 함수이다.
int main()
{
	// cout : 콘솔창에 출력해주는 기능이다.
	cout << "test output" << endl;
	cout << "가나다라" << endl;

	/*
	*문자를 표현 할때, ascii를 가진다
	  변수 종류	|	용량	|	데이터	|	표현 범위		| unsigned	|
		char	|	1byte	|	문자	|	-128 ~ 127		| 0~255		|
		bool	|	1byte	|	참/거짓	|	true/false		| t/f		|
		short	|	2byte	|	정수	|	-32768~32767	| 0~65535	|
		int		|	4byte	|	정수	|	-22억~21억		| 0~43억	|
		float	|	4byte	|	실수	|	
		double	|	8byte	|	실수	|	
	*/
	int __number = 10;
	cout << __number << endl;
	
	bool __bool = true;
	__bool = false;
	cout << __bool << endl;

	// 한글, 한문 등의 문자는 2byte를 차지하여 char로 저장하기 힘듦
	char __char = 't';
	cout << __char << endl;

	float __fnum = 3.14f;
	cout << __fnum << endl;

	double __dnum = 123.4567;
	cout << __dnum << endl;

	/*
	사칙연산자 : + - * / %
	관계연산자 : < <= > >= == !=
	논리연산자 : &&, ||, !
	비트연산자 : 
	*/
	
	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	cout << "숫자를 입력하세요 : ";
	cin >> __number;

	cout << (10 <= __number && __number <= 20) << endl;

	return 0;
}