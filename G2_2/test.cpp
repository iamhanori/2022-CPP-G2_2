#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Character{
public:
	// »ý¼ºÀÚ
	Character(string _name, int _hp, int _of, int _de)
		:name(_name), hp(_hp), of(_of), de(_de) {}


	void Print()
	{
		cout << "name " << name << endl;
		cout << "hp " << hp << endl;
		cout << "of " << of << endl;
		cout << "de " << de << endl;
	}
private:
	string name;
	int hp;
	int of;
	int de;
};

int main(void)
{
	Character *player = new Character("player", 1, 1, 1);
	player->Print();
}