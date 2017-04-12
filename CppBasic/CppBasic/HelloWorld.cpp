#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}

/*
C++ 에서는 프로그래머가 정의하는 헤더파일이 아닌,
표준 헤더파일의 선언에서는 확장자를 생략하기로 약속되어 있다.
- 과거의 표준 라이브러리와 새로운 표준 라이브러리의 구분
- 새로운 표준 라이브러리를 사용하는 형태로 소스코드를 쉽게 변경할 수 있도록

std::endl : 개행의 의미

창모드로 실행하여 결과 보기 : 디버그하지 않고 시작 - Ctrl + F5
*/