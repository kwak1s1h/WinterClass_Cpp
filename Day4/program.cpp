#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <fstream>
#define PI 3.14

using namespace std;

#pragma region Circle

//class Circle
//{
//	double radius;
//
//public:
//	double getArea() {
//		return pow(this->radius, 2) * PI;
//	}
//	double getRadius() {
//		return this->radius;
//	}
//	void setRadius(double radius) {
//		this->radius = radius;
//	}
//	double getPerimeter() {
//		return this->radius * 2;
//	}
//};
//
//int main() {
//	cout << "Circle 1: " << endl;
//	Circle circle1;
//	circle1.setRadius(10.0);
//	cout << "Radius: " << circle1.getRadius() << endl;
//	cout << "Area: " << circle1.getArea() << endl;
//	cout << "Perimeter: " << circle1.getPerimeter() << endl;
//}

#pragma endregion

#pragma region �����ձ�

//class players {
//	string name;
//public:
//	void setName(string name) {
//		this->name = name;
//	}
//	string getName() {
//		return this->name;
//	}
//};
//
//int main() {
//	cout << "�����ձ� ������ �����մϴ�." << endl;
//	Sleep(1000);
//	int playerCnt = 0;
//	while (true) {
//		cout << "���ӿ� �����ϴ� �ο��� �� ���Դϱ�? : ";
//		cin.ignore();
//		cin >> playerCnt;
//		if (playerCnt > 0) {
//			break;
//		}
//		else
//		{
//			system("cls");
//			cout << "�����ձ� ������ �����մϴ�." << endl;
//		}
//	}
//
//	players* arr = new players[playerCnt];
//	for (int i = 0; i < playerCnt; i++) {
//		string name;
//		cout << "�������� �̸��� �Է��ϼ��� : ";
//		cin >> name;
//		players p;
//		p.setName(name);
//		arr[i] = p;
//	}
//
//	string before = "anything", current;
//	
//	cout << "�����ϴ� �ܾ�� " << before << " �Դϴ�." << endl;
//
//	bool stop = false;
//	while (!stop) {
//		for (int i = 0; i < playerCnt; i++) {
//			cout << arr[i].getName() << " >> ";
//			cin >> current;
//			cout << before << " " << current << endl;
//
//			if (before.back() == current.front()) {
//				before = current;
//				current = "";
//				cout << "���� ����" << endl;
//			}
//			else {
//				cout << arr[i].getName() << "���� Ʋ�Ƚ��ϴ�";
//				stop = true;
//				break;
//			}
//		}
//	}
//}

#pragma endregion

#pragma region ���

//class Parent {
//public:void Func() {
//
//}
//};
//
//class Child : public Parent {
//public:void Func() {
//
//}
//};
//
//int main() {
//	Child c;
//	c.Func();
//	c.Parent::Func();
//}

#pragma endregion

#pragma region ���ø�

//template<class T>
//void swap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	string str1, str2;
//	double y1, y2;
//	int x1, x2;
//
//	cout << "������⸦ �������� ���ڿ� 2���� �Է��ϼ���. : ";
//	cin >> str1 >> str2;
//	cout << "������⸦ �������� �Ǽ� 2���� �Է��ϼ���. : ";
//	cin >> y1 >> y2;
//	cout << "������⸦ �������� ���� 2���� �Է��ϼ���. : ";
//	cin >> x1 >> x2;
//
//	::swap(str1, str2);
//	::swap(y1, y2);
//	::swap(x1, x2);
//
//	cout << "swap() �Լ� ȣ�� �� ����Դϴ�." << endl;
//	cout << str1 << " " << str2 << endl;
//	cout << y1 << " " << y2 << endl;
//	cout << x1 << " " << x2 << endl;
//}

#pragma endregion

#pragma region ����

//int main() {
//	int num;
//	vector<int> vt;
//	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? : ";
//	cin >> num; 
//	for (int i = 0; i < num; i++) {
//		int data;
//		cout << "������ �Է��ϼ��� : ";
//		cin >> data;
//		vt.push_back(data);
//	}
//	for (int i = 0; i < vt.size(); i++) {
//		cout << vt.at(i) << " ";
//	}
//}

#pragma endregion

#pragma region �ݺ���

//int main() {
//	vector<int> vt { 1, 2, 3, 4, 5 };
//	vector<int>::iterator it = vt.begin();
//	while (it != vt.end()) {
//		cout << *it;
//		cout << " ";
//		it++;
//	}
//	for (int it : vt) {
//
//	}
//}

#pragma endregion

#pragma region �������

//int main() {
//	vector<int> scores;
//	while (true) {
//		int score;
//		cout << "������ �Է��ϼ���. (����� -1) : ";
//		cin >> score;
//		if (score == -1) break;
//		scores.push_back(score);
//	}
//	double sum = 0;
//	for (int n : scores) {
//		sum += n;
//	}
//	cout << "********************* ���� ��� = " 
//		 << sum / scores.size();
//}

#pragma endregion

#pragma region ���α׷��ӽ�

//int solution(vector<int> absolutes, vector<bool> signs) {
//    int sum = 0;
//    for (int i = 0; i < absolutes.size(); i++) {
//        sum += signs[i] ? absolutes[i] : -absolutes[i];
//    }
//    return sum;
//}
//
//int main() {
//    vector<int> abs = { 1, 2, 3, 4 };
//    vector<bool> signs = { true, true, true, false };
//    cout << solution(abs, signs);
//}

//int solution(vector<string> babbling) {
//    vector<string> canSay = { "aya", "ye", "woo", "ma" };
//    int cnt = 0;
//    for (string b : babbling) {
//        for (int i = 0; i < canSay.size(); i++) {
//            string w = canSay[i];
//            int f = b.find(w);
//            if (f >= 0 && f <= b.size() - w.size()) {
//                cout << "find. b: " << b << ", w: " << w << endl;
//                b.erase(f, w.size());
//                cout << "erased. b: " << b << endl;
//                i = 0;
//            }
//        }
//        cout << "check. b: " << b << endl;
//        if (b.empty()) {
//            cnt++;
//            cout << "empty." << endl;
//        }
//    }
//    return cnt;
//}
//
//int main() {
//    vector<string> b = {"aya", "yee", "u", "maa", "wyeoo"};
//    cout << solution(b) << endl;
//}

double get����(vector<int> dot1, vector<int> dot2) {
    return (double)(dot1[1] - dot2[1]) / (double)(dot1[0] - dot2[0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    if (get����(dots[0], dots[1]) == get����(dots[2], dots[3])) {
        return 1;
    }
    if (get����(dots[0], dots[2]) == get����(dots[1], dots[3])) {
        return 1;
    }
    if (get����(dots[0], dots[3]) == get����(dots[1], dots[2])) {
        return 1;
    }
    return answer;
}

#pragma endregion
