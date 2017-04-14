// 대입 연산자의 오버로딩

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char * name;
public:
	Person() { name = NULL; }
	Person(char * str)
	{
		int len = (int)strlen(str);
		name = new char[len + 1];
		strcpy(name, str);
	}
	~Person() { delete[]name; }

	Person & operator= (const Person & psn);

	char * GetName()
	{
		return name;
	}
};

Person & Person::operator= (const Person & psn)
{
	if (this == &psn)
		return *this;

	delete[]name;	//지금까지의 메모리를 해제
	int len = (int)strlen(psn.name);
	name = new char[len + 1];
	strcpy(name, psn.name);
	
	return *this;
}

int main2()
{
	Person psn1("Orange"), psn2("Apple");
	psn1 = psn2;
	cout << psn1.GetName() << endl;

	return 0;
}