#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

template <typename S, typename I>
class Character{
private:
	S name;
	I hp;
	I of;
	I de;

public:
	// »ý¼ºÀÚ
	Character(S _name, I _hp, I _of, I _de)
		:name(_name), hp(_hp), of(_of), de(_de) {}


	void Print()
	{
		cout << "name " << name << endl;
		cout << "hp " << hp << endl;
		cout << "of " << of << endl;
		cout << "de " << de << endl;
	}

};

int main(void)
{
	Character<string, int> * p1 = new Character<string, int>("p1", 1, 1, 1);
	p1->Print();

	delete p1;
	return 0;
}