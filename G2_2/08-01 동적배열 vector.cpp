#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{

	// 크기 확장이 가능한 동적배열
	vector<string> s3;
	s3.reserve(10); // 크기를 10개로 확장

	for (int i = 0; i < 10; i++) {
		s3.push_back("ab");
	}

	// 기존공간에 크기를 확장하여 삽입
	s3.push_back("ab");

	// 백터의 원소들을 출력
	for (iter = s3.begin(); iter != s3.end(); iter++) {
		cout << *iter << " ";
	}

	// 백터 데이터 수정
	s3[1] = "cd";
	s3.at(2) = "ef";

	// 백터의 원소들을 출력
	// 백터의 원소들을 출력
	for (iter = s3.begin(); iter != s3.end(); iter++) {
		cout << *iter << " ";
	}

	return 0;

}