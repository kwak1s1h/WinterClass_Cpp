#include <iostream>
#include <string>
#define PI 3.14

using namespace std;

#pragma region �����

//int main() {
//
//	char name[100], comment[100];
//	int age = 0;
//
//	cout << "�̸��� �Է��� �ּ���." << endl;
//	cout << "�̸� ������ ��������ϰ� ���̸� ������." << endl;
//
//	cin >> name >> age;
//
//	if (age <= 0) {
//		cout << "���̿� �ٸ� ���� �Է��ϼ���.";
//		return -1;
//	}
//
//	cout << "�ݰ����� " << name;
//	cout << " ����� " << age << " ���̱���." << endl;
//	cout << "�� �� ���� �ֳ���?" << endl;
//
//	cin.ignore();
//	cin.getline(comment, sizeof(comment) / sizeof(char));
//	cout << comment;
//
//	return 0;
//}

#pragma endregion

#pragma region ������

// ���̴� ����� Area!
//double getCircleArea(double radius);

//int main() {
//	double rad = 0;
//	cin >> rad;
//	cout << getCircleArea(rad) << endl;
//}
//
//double getCircleArea(double radius) {
//	const double ���� = 3.14;
//	return radius * radius * ����;
//}

#pragma endregion

#pragma region ���ڿ�1

//string change(string str);
//
//int main() {
//	
//	string str;
//
//	cout << "���ڿ��� �Է��ϼ��� : ";
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

#pragma region ���ڿ�2

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
//	cout << "��ĭ�� ������ ���ڿ��� �Է��ϼ���." << endl;
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

#pragma region ������

//int main() {
//	int input = 0;
//	cin >> input;
//	if (input <= 0) {
//		cout << "�ùٸ� ���� �Է��ϼ���.";
//		return -1;
//	}
//	cout << (input % 2 == 0 ? "¦��" : "Ȧ��");
//}

#pragma endregion

#pragma region �������

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
//	cout << "������ �Է��ϼ���." << endl;
//	cin >> score;
//
//	if (score <= 0) return -1;
//	cout << "����� " << calcGrade(score);
//}

#pragma endregion

#pragma region �Ҽ�ã��

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
//	cout << "2 ���� " << num << " ������ �Ҽ��� ������ " << cnt << "�� �Դϴ�.";
//}
//
//int main() {
//	int n = 0;
//	
//	cout << "�Ҽ��� ���� �ִ� ���ڸ� �Է��ϼ��� : ";
//	cin >> n;
//	findAllPrime(n);
//}

#pragma endregion

#pragma region ���� �Ƕ�̵�

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

	cout << "���̸� �Է� �ϼ��� : ";
	cin >> height;

	createPyramid(height);
}

#pragma endregion
