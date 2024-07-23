// 0722.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int main()
//{
//    int result = 0;  // int 형 정의
//	float f = 1.32345;  // float 변수 설정
//	double coefficient = 10.8; // 실수형 변수 정의
//	char ch = 'c';  // 단일 문자 정의
//	auto name = "Lady G."; // 컴파일러가 자동으로 type을 정하게 함
//	// 단 초기값을 줘야 함
//	auto address;  // error. 초기값이 없어 형을 정할 수 없음
//	age = 12;  // error. Variable declaration must
//	// specify a type or use auto!
//	result = "Kenny G"; // error. Can't assing text to an int.
//	string result = "zero"; // error. Can't redefine a variable with
//	// new type
//	int maxValue;  // Not recommended! maxValue contains
//	// garbage bits untill it is initialized
//	bool 참거짓 = false; // 한글로 변수를 정해도 됩니다. 잘 사용하진 않지만...
//}
using namespace std;
#include <string>
#include <iostream>
#include <vector>

int main() {
	std::cout << "Hello World\n";

	vector<string> apples;
	apples.push_back("juice");
	apples.push_back("bread");
	apples.push_back("snack");

	// 벡터의 크기 출력
	std::cout << "apples size:" << apples.size() << std::endl;

	for (int i = 0; i < apples.size(); ++i) {
		std::cout << apples[i] << ",";
	}

	std::cout << std::endl;
}