#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// ��� : ����
// ����Ź : �����
// ���»��� : �̵���
// ��� : ���γ�

// arr["���"] = "����"
// arr["����Ź"] = "�����"

int main(void)
{
	// map<key�ڷ���, value �ڷ���>
	map<string, string> m;
	m.insert(pair<string, string>("���", "����")); // ũ�⸦ 10���� Ȯ��
	m.insert(pair<string, string>("����Ź", "�����")); // ũ�⸦ 10���� Ȯ��
	m.insert(pair<string, string>("���»���", "�̵���")); // ũ�⸦ 10���� Ȯ��
	m.insert(pair<string, string>("���", "���γ�")); // ũ�⸦ 10���� Ȯ��

	map<string, string>::iterator iter;
	
	// ������ ���ҵ��� ���(iterator)
	// ������ ������ key�� �ڵ�����
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "�� " << iter->second << "�� " << endl;
	}
	cout << endl;

	map<string, string>::iterator actor = m.find("���");

	cout << "���ΰ��� " << actor->second << endl;

	return 0;

}