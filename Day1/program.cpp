#include <iostream>
#include <string>
#define PI 3.14

using namespace std;

#pragma region 입출력

//int main() {
//
//	char name[100], comment[100];
//	int age = 0;
//
//	cout << "이름을 입력해 주세요." << endl;
//	cout << "이름 다음에 띄워쓰기하고 나이를 쓰세요." << endl;
//
//	cin >> name >> age;
//
//	if (age <= 0) {
//		cout << "나이에 바른 값을 입력하세요.";
//		return -1;
//	}
//
//	cout << "반가워요 " << name;
//	cout << " 당신은 " << age << " 살이군요." << endl;
//	cout << "더 할 말이 있나요?" << endl;
//
//	cin.ignore();
//	cin.getline(comment, sizeof(comment) / sizeof(char));
//	cout << comment;
//
//	return 0;
//}

#pragma endregion

#pragma region 원넓이

// 넓이는 영어로 Area!
//double getCircleArea(double radius);

//int main() {
//	double rad = 0;
//	cin >> rad;
//	cout << getCircleArea(rad) << endl;
//}
//
//double getCircleArea(double radius) {
//	const double 파이 = 3.14;
//	return radius * radius * 파이;
//}

#pragma endregion

#pragma region 문자열1

//string change(string str);
//
//int main() {
//	
//	string str;
//
//	cout << "문자열을 입력하세요 : ";
//	cin >> str;
//	cout << change(str);
//}
//
//string change(string str) {
//	
//	for (int i = 0; i < str.length(); i++)
//	{
//		str[i] = str[i] == 'o' ? 'x' : str[i];
//	}
//	return str;
//}

#pragma endregion

#pragma region 문자열2

//void printBackText(string str) {
//	string temp = str; 
//	for (int i = 0; i < str.length(); i++)
//	{
//		char f = temp.front();
//		temp = temp.substr(1, str.length() - 1);
//		temp.push_back(f);
//		cout << temp << endl;
//	}
//}
//
//int main() {
//
//	string str;
//
//	cout << "빈칸을 포함한 문자열을 입력하세요." << endl;
//	getline(cin, str);
//	printBackText(str);
//
//	//cout << "i love c++" << endl;
//	//cout << " love c++i" << endl;
//	//cout << "love c++i " << endl;
//	//cout << "ove c++i l" << endl;
//	//cout << "ve c++i lo" << endl;
//	//cout << "e c++i lov" << endl;
//	//cout << " c++i love" << endl;
//	//cout << "c++i love " << endl;
//	//cout << "++i love c" << endl;
//	//cout << "+i love c+" << endl;
//	//cout << "i love c++" << endl;
//}

#pragma endregion

#pragma region 연산자

//int main() {
//	int input = 0;
//	cin >> input;
//	if (input <= 0) {
//		cout << "올바른 값을 입력하세요.";
//		return -1;
//	}
//	cout << (input % 2 == 0 ? "짝수" : "홀수");
//}

#pragma endregion

#pragma region 학점계산

//char calcGrade(int score) {
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//		return 'A';
//	case 8:
//		return 'B';
//	case 7:
//		return 'C';
//	case 6:
//		return 'D';
//	default:
//		return 'E';
//	}
//}
//
//int main() {
//	int score = -1;
//	cout << "점수를 입력하세요." << endl;
//	cin >> score;
//
//	if (score <= 0) return -1;
//	cout << "등급은 " << calcGrade(score);
//}

#pragma endregion

#pragma region 소수찾기

//void findAllPrime(int num) {
//	int j, cnt = 0;
//	for (int i = 2; i <= num; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0) break;
//		}
//		if (j == i)
//		{
//			cout << i << " ";
//			cnt++;
//		}
//	}
//	cout << endl;
//	cout << "2 부터 " << num << " 사이의 소수의 개수는 " << cnt << "개 입니다.";
//}
//
//int main() {
//	int n = 0;
//	
//	cout << "소수를 구할 최대 숫자를 입력하세요 : ";
//	cin >> n;
//	findAllPrime(n);
//}

#pragma endregion

#pragma region 숫자 피라미드

void createPyramid(int height) {
	for (int i = height - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		
		for (int k = 0; k < (height - i) * 2 - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// height = 5;
	// i = 4    *
	// i = 3   ***
	// i = 2  *****
	// i = 1 *******
	// i = 0*********

	
}

int main() {
	int height = 0;

	cout << "높이를 입력 하세요 : ";
	cin >> height;

	createPyramid(height);
}

#pragma endregion
