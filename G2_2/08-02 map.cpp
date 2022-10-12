#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// 김신 : 공유
// 지은탁 : 김고은
// 저승사자 : 이동욱
// 써니 : 유인나

// arr["김신"] = "공유"
// arr["지은탁"] = "김고은"

int main(void)
{
	// map<key자료형, value 자료형>
	map<string, string> m;
	m["김신"] = "공유";
	m["지은탁"] = "김고은";
	m["저승사자"] = "이동욱";
	m["써니"] = "유인나";

	map<string, string>::iterator iter;
	
	// 백터의 원소들을 출력(iterator)
	// 삽입할 떄마다 key는 자동정렬
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "역 " << iter->second << "님 " << endl;
	}
	cout << endl;

	
	cout << "주인공은 " << m["김신"] << endl;

	
	return 0;

}