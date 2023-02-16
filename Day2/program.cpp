#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region ������

//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	int x = 1;
//	int y = 3;
//	cout << x << y << endl;
//	swap(&x, &y);
//	cout << x << y << endl;
//}

#pragma endregion

#pragma region ������

//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int x = 1;
//	int y = 3;
//	cout << x << y << endl;
//	swap(x, y);
//	cout << x << y << endl;
//}

#pragma endregion

#pragma region ����

// 1. ���� �ڵ��� ���� ���

//int main() {
//	int x = 100;
//	int& y = x;
//	int& z = x;
//	cout << x << " " << y << " " << z;
//}

// ��� : 100 100 100

// 2. ���� �ڵ� ����

//int main() {
//	int x = 1;
//	int y = 2;
//	int& z = x;
//	z = y;
//	cout << x << " " << y << " " << z;
//}

// ��� : 2 2 2

// 3. ���� �ڵ� �����

//int main() {
//	int x = 1000;
//	int& y = 2000;
//}

// ���� : ������ y�� �� ������.

// 4. ���� �ڵ��� ���� ���

//int main() {
//	int x = 10;
//	int* y = &x;
//	cout << x << " " << *y;
//}

// ��� : 10 10

// 5. ���� �ڵ� �����

//int main() {
//	const int x = 100;
//	double* y = &x;
//}

// ���� : ������ y�� �����Ϸ��� ������ �ڷ����� �ٸ�.

// 6. ���� �ڵ� �����

//int main() {
//	int* x = 25;
//}

// ���� : ������ x�� �� ������.

// 7. ���� �ڵ��� ���� ���

//int main() {
//	int sample[5] = { 5, 10, 15, 20, 25 };
//	cout << *sample + 2 << endl;
//	cout << *(sample + 2);
//}

// ��� : 7
//        15

#pragma endregion

#pragma region �޸� �Ҵ�

//int main() {
//	int length = 0;
//
//	cout << "�� ���� ���� ������ �Է��Ͻðڽ��ϱ�? : ";
//	cin >> length;
//
//	if (length <= 0)
//	{
//		cout << "���α׷��� ����˴ϴ�.";
//		return -1;
//	}
//
//	cout << length << "�� ���� ������ �Է��ϼ���." << endl;
//
//	int* arr = new int[length];
//
//	for (int i = 0; i < length; i++)
//	{
//		int score = 0;
//		cin >> score;
//		arr[i] = score;
//	}
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << i + 1 << "��° ����� ������ " << arr[i] << "�� �Դϴ�." << endl;
//	}
//
//	delete[] arr;
//}

#pragma endregion

#pragma region ����ü

//struct Car {
//	int num;
//	double gas;
//};
//
//void show(Car& c) {
//	cout << "���� ��ȣ�� " << c.num << "��, ������ ���� " << c.gas << " �Դϴ�." << endl;
//}
//
//int main() {
//	Car car = Car { 1, 3.14 };
//	show(car);
//
//	delete& car;
//}

#pragma endregion

#pragma region ���

//struct person
//{
//	string name;
//	int age;
//	double weight;
//	double height;
//};
//
//int main() {
//
//	int n = 0;
//
//	cout << "ȸ�� ���� �Է��ϼ��� : ";
//	cin >> n;
//
//	person* arr = new person[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "ȸ�� " << i + 1 
//			 << "�� �̸�, ����, ������, Ű�� �������� �����Ͽ� �Է��ϼ���."
//			 << endl;
//		string name = "";
//		int age = 0;
//		double height = 0;
//		double weight = 0;
//
//		cin >> name >> age >> weight >> height;
//		arr[i] = person{ name, age, weight, height };
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		person p = arr[i];
//		cout << i + 1 << "�� ȸ���� "
//			 << "�̸��� " << p.name 
//			 << ", ���̴� " << p.age 
//			 << ", �����Դ� " << p.weight 
//			 << ", Ű�� " << p.height << "�Դϴ�."
//			 << endl;
//	}
//
//	delete[] arr;
//}

#pragma endregion

#pragma region ���α׷��ӽ�

//double solution(vector<int> numbers) {
//	double answer = 0;
//	for (int i = 0; i < numbers.size(); i++) {
//		answer += numbers[i];
//	}
//	answer /= numbers.size();
//	return answer;
//}
//
//int main() {
//	cout << solution(vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
//}

#pragma endregion
