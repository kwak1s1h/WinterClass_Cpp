#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region 포인터

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

#pragma region 참조자

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

#pragma region 퀴즈

// 1. 다음 코드의 실행 결과

//int main() {
//	int x = 100;
//	int& y = x;
//	int& z = x;
//	cout << x << " " << y << " " << z;
//}

// 출력 : 100 100 100

// 2. 다음 코드 수정

//int main() {
//	int x = 1;
//	int y = 2;
//	int& z = x;
//	z = y;
//	cout << x << " " << y << " " << z;
//}

// 출력 : 2 2 2

// 3. 다음 코드 디버그

//int main() {
//	int x = 1000;
//	int& y = 2000;
//}

// 정답 : 참조자 y에 값 대입함.

// 4. 다음 코드의 실행 결과

//int main() {
//	int x = 10;
//	int* y = &x;
//	cout << x << " " << *y;
//}

// 출력 : 10 10

// 5. 다음 코드 디버그

//int main() {
//	const int x = 100;
//	double* y = &x;
//}

// 정답 : 포인터 y가 참조하려는 변수와 자료형이 다름.

// 6. 다음 코드 디버그

//int main() {
//	int* x = 25;
//}

// 정답 : 포인터 x에 값 대입함.

// 7. 다음 코드의 실행 결과

//int main() {
//	int sample[5] = { 5, 10, 15, 20, 25 };
//	cout << *sample + 2 << endl;
//	cout << *(sample + 2);
//}

// 출력 : 7
//        15

#pragma endregion

#pragma region 메모리 할당

//int main() {
//	int length = 0;
//
//	cout << "몇 명의 시험 점수를 입력하시겠습니까? : ";
//	cin >> length;
//
//	if (length <= 0)
//	{
//		cout << "프로그램이 종료됩니다.";
//		return -1;
//	}
//
//	cout << length << "명 분의 점수를 입력하세요." << endl;
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
//		cout << i + 1 << "번째 사람의 점수는 " << arr[i] << "점 입니다." << endl;
//	}
//
//	delete[] arr;
//}

#pragma endregion

#pragma region 구조체

//struct Car {
//	int num;
//	double gas;
//};
//
//void show(Car& c) {
//	cout << "차량 번호는 " << c.num << "번, 연료의 양은 " << c.gas << " 입니다." << endl;
//}
//
//int main() {
//	Car car = Car { 1, 3.14 };
//	show(car);
//
//	delete& car;
//}

#pragma endregion

#pragma region 사람

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
//	cout << "회원 수를 입력하세요 : ";
//	cin >> n;
//
//	person* arr = new person[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "회원 " << i + 1 
//			 << "의 이름, 나이, 몸무게, 키를 띄워쓰기로 구분하여 입력하세요."
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
//		cout << i + 1 << "번 회원의 "
//			 << "이름은 " << p.name 
//			 << ", 나이는 " << p.age 
//			 << ", 몸무게는 " << p.weight 
//			 << ", 키는 " << p.height << "입니다."
//			 << endl;
//	}
//
//	delete[] arr;
//}

#pragma endregion

#pragma region 프로그래머스

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
