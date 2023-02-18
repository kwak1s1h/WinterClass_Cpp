#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region 1번 문제

//int main() {
//	cout << "문자열을 입력하세요. : ";
//	string input;
//	getline(cin, input);
//
//	int aCnt = 0, bCnt = 0, cCnt = 0;
//	for (char c : input) {
//		if (c == 'a' || c == 'A') aCnt++;
//		else if (c == 'b' || c == 'B') bCnt++;
//		else if (c == 'c' || c == 'C') cCnt++;
//	}
//
//	cout << "a 또는 A의 개수 : " << aCnt
//		<< " / b 또는 B의 개수 : " << bCnt
//		<< " / c 또는 C의 개수 : " << cCnt;
//}

#pragma endregion

#pragma region 2번 문제

//string solution(string new_id) {
//    string answer = "";
//    for (int i = 0; i < new_id.size(); i++) {
//        new_id[i] = tolower(new_id[i]);
//    }
//    for (int i = 0; i < new_id.size(); i++) {
//        if (new_id[i] >= 'a' && new_id[i] <= 'z' || new_id[i] >= '0' && new_id[i] <= '9' || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') {
//            answer += new_id;
//        }
//    }
//
//    for (int i = 0; i < answer.size(); i++) {
//        if (i != answer.size() - 1) {
//            if (answer[i] == '.' && answer[i + 1] == '.') {
//                answer.erase(i, 1);
//                i--;
//            }
//        }
//    }
//
//    if (answer.front() == '.') answer.erase(answer.begin());
//    if (answer.back() == '.') answer.pop_back(); 
//
//    if (answer.empty()) answer = "a";
//    if (answer.size() >= 16) {
//        answer = answer.substr(0, 15);
//        if (answer.back() == '.') answer.pop_back();
//    }
//    if (answer.size() <= 2) {
//        while (answer.size() < 3) {
//            answer += answer.back();
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//}

#pragma endregion

#pragma region 최종문제

#pragma region 1번

//int main() {
//	int a, b, sum = 0;
//	cin >> a >> b;
//	for (int i = 1; i < a; i++) {
//		if (i % b == 0) sum += i;
//	}
//	cout << a * b;
//}

#pragma endregion

#pragma region 2번

//int main() {
//	int a, b, sum = 0;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++) {
//		sum += i;
//	}
//	cout << sum;
//}

#pragma endregion

#pragma region 3번

//int main() {
//	int a, sum = 0;
//	cin >> a;
//	for (int i = 1; i < a; i++) {
//		if (a % i == 0) sum += i;
//	}
//	cout << sum;
//}

#pragma endregion

#pragma region 4번

//int main() {
//	int result = 0, cnt;
//	cin >> cnt;
//	int* arr = new int[cnt];
//	for (int i = 0; i < cnt; i++) {
//		int input;
//		cin >> input;
//		arr[i] = input;
//	}
//	for (int i = 0; i < cnt; i++) {
//		for (int j = 0; j < cnt; j++) {
//			if (i == j) continue;
//			if (arr[i] - arr[j] > result) result = arr[i] - arr[j];
//		}
//	}
//	cout << result;
//}

#pragma endregion

#pragma region 5번

//int main() {
//	string input;
//	cin >> input;
//	vector<int> arr;
//	int result = 0;
//	for (int n : input) {
//		if (n >= '0' && n <= '9') {
//			arr.push_back(n - (int)'0');
//		}
//	}
//	for (int i = 0; i < arr.size(); i++) {
//		result += arr[i] * pow(10, arr.size() - i - 1);
//	}
//	cout << result;
//}

#pragma endregion

#pragma region 6번

//int main() {
//	string input, result = "";
//	getline(cin, input);
//	for (char c : input) {
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
//			result += tolower(c);
//		}
//	}
//	cout << result;
//}

#pragma endregion

#pragma region 7번

//int main() {
//	int cnt;
//	cin >> cnt;
//	int* arr = new int[cnt];
//	for (int i = 0; i < cnt; i++) {
//		int input;
//		cin >> input;
//		arr[i] = input;
//	}
//	int* ranks = new int[cnt];
//	for (int i = 0; i < cnt; i++) {
//		int rank = 1;
//		int score = arr[i];
//		for (int j = 0; j < cnt; j++) {
//			if (i == j) continue;
//			if (arr[j] > score) rank++;
//		}
//		ranks[i] = rank;
//	}
//	for (int i = 0; i < cnt; i++) {
//		cout << ranks[i] << " ";
//	}
//}

#pragma endregion

#pragma region 9번

//int main() {
//	int input, sum = 0;
//	cin >> input;
//	for (int i = 1; i <= input; i++) {
//		sum += i / 10 + 1;
//	}
//	cout << sum;
//}

#pragma endregion

#pragma region 10번

//포기

#pragma endregion

#pragma endregion
