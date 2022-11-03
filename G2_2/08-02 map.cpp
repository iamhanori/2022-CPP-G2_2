#include <iostream>
#include <string>
#include <map>

using namespace std;

//��� : ����
//����Ź : �����
//������ : �̵���
//��� : ���γ�

// arr["���"] = "����"
// arr["����Ź"] = "�����"

int main(void)
{
    // map<key �ڷ���, value�ڷ���>
    map<string, string> m;
    m["���"] = "����";
    m.insert(pair<string, string>("����Ź", "�����"));
    m.insert(pair<string, string>("���»���", "�̵���"));
    m.insert(pair<string, string>("���", "���γ�"));

    map<string, string>::iterator iter;

    //������ ���ҵ��� ��� (iterator)
    //�����ҋ����� key�� �ڵ�����
    for (auto x : m)
    {
        cout << x.first << " �� " << x.second << " �� " << endl;
    }
    cout << endl;

    map<string, string>::iterator actor = m.find("���");

    //key�� �����ϴ��� üũ
    if (actor != m.end())
        cout << "���ΰ���" << actor->second << endl;

    return 0;
}