#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{

	// ũ�� Ȯ���� ������ �����迭
	vector<string> s3;
	s3.reserve(10); // ũ�⸦ 10���� Ȯ��

	for (int i = 0; i < 10; i++) {
		s3.push_back("ab");
	}

	// ���������� ũ�⸦ Ȯ���Ͽ� ����
	s3.push_back("ab");

	// ������ ���ҵ��� ���
	for (iter = s3.begin(); iter != s3.end(); iter++) {
		cout << *iter << " ";
	}

	// ���� ������ ����
	s3[1] = "cd";
	s3.at(2) = "ef";

	// ������ ���ҵ��� ���
	// ������ ���ҵ��� ���
	for (iter = s3.begin(); iter != s3.end(); iter++) {
		cout << *iter << " ";
	}

	return 0;

}