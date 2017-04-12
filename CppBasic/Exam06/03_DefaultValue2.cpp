#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);

int main3()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}


/*
부분적 디폴트 값 설정은 반드시 오른쪽 인자의 디폴트 값부터
지정하는 형태로 정의해야 한다.
*/