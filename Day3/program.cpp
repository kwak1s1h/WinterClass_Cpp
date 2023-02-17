#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

#pragma region 랜덤

//int main() {
//	int length = 0;
//	
//	cout << "총 인원수 설정 : ";
//	cin >> length;
//
//	cout << "참여자 이름을 총 인원수에 맞게 기입하세요." << endl;
//
//	string* arr = new string[length];
//
//	for (int i = 0; i < length; i++) {
//		cin >> arr[i];
//	}
//
//	while(true)
//	{
//		cout << "1을 누르면 뽑기가 시작됩니다. 종료는 0을 누르세요.";
//
//		int input = -1;
//		cin >> input;
//
//		if (input == 0) break;
//		else if (input == 1) {
//			cout << "뽑기를 시작 합니다." << endl;
//			Sleep(1000);
//			srand((unsigned int)time(NULL));
//			int random = rand() % length;
//			cout << "발표할 사람 : " << arr[random];
//		}
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region 포인터 복습

//void add(int& num1, int& num2, int a) {
//	num1 += a;
//	num2 += a;
//	return;
//}
// 
//void add(int* num1, int* num2, int a) {
//	*num1 += a;
//	*num2 += a;
//	return;
//}
//
//int main() {
//	int x1, x2, a;
//	cout << "2 과목의 시험 점수와 추가할 점수를 입력하세요 : ";
//	cin >> x1 >> x2 >> a;
//
//	add(x1, x2, a);
//	add(&x1, &x2, a);
//
//	cout << "2 과목 시험점수에 점수가 추가된 뒤의 점수는 " << x1 << " " << x2;
//}

#pragma endregion

#pragma region 이넘

//int main() {
//	enum type { 가위 = 1, 바위, 보 };
//	int win = 0;
//	int lose = 0;
//	int same = 0;
//
//	for(int i = 0; i < 10; i++)
//	{
//		cout << "번호를 선택하세요." << endl << "1. 가위 2. 바위 3. 보 4. 종료" << endl << "player : ";
//		int player;
//		//cin >> player;
//		player = 2;
//		if (player == 4) break;
//		
//		srand((unsigned int)time(NULL));
//		int bot = rand() % 3 + 1;
//
//		switch (bot)
//		{
//		case 가위:
//			cout << "bot : " << "가위" << endl;
//			break;
//		case 바위:
//			cout << "bot : " << "바위" << endl;
//			break;
//		case 보:
//			cout << "bot : " << "보" << endl;
//			break;
//		}
//
//		/*if (player == bot)
//		{
//			same++;
//			cout << "*****" << "무승부" << "*****" << endl;
//			cout << "승 : " << win << " 패 : " << lose << " 무승부 : " << same << endl;
//			system("pause");
//			continue;
//		}*/
//		/*switch (player)
//		{
//		case 바위:
//			switch (bot)
//			{
//			case 가위:
//				win++;
//				cout << "*****" << "player 승리" << "*****" << endl;
//				break;
//			case 보:
//				lose++;
//				cout << "*****" << "bot 승리" << "*****" << endl;
//				break;
//			}
//			break;
//		case 가위:
//			switch (bot)
//			{
//			case 보:
//				win++;
//				cout << "*****" << "player 승리" << "*****" << endl;
//				break;
//			case 바위:
//				lose++;
//				cout << "*****" << "bot 승리" << "*****" << endl;
//				break;
//			}
//			break;
//		case 보:
//			switch (bot)
//			{
//			case 바위:
//				win++;
//				cout << "*****" << "player 승리" << "*****" << endl;
//				break;
//			case 가위:
//				lose++;
//				cout << "*****" << "bot 승리" << "*****" << endl;
//				break;
//			}
//			break;
//		}*/
//		int result = player - bot;
//		switch (result)
//		{
//		case 0:
//			same++;
//			cout << "*****" << "무승부" << "*****" << endl;
//			break;
//		case 1:
//		case -2:
//			win++;
//			cout << "*****" << "player 승리" << "*****" << endl;
//			break;
//		default:
//			lose++;
//			cout << "*****" << "bot 승리" << "*****" << endl;
//			break;
//		}
//		cout << "승 : " << win << " 패 : " << lose << " 무승부 : " << same << endl;
//		Sleep(1000);
//		if (i == 9) break;
//		system("cls");
//	}
//}

#pragma endregion

#pragma region 빙고

//int main() {
//	srand(unsigned int(time(NULL)));
//	int num[25] = {};
//	for (int i = 0; i < 25; i++)
//		num[i] = i + 1;
//
//	//shuffle
//	int temp, idx1, idx2;
//	for (int i = 0; i < 100; i++) {
//		idx1 = rand() % 25;
//		idx2 = rand() % 25;
//		temp = num[idx1];
//		num[idx1] = num[idx2];
//		num[idx2] = temp;
//	}
//	int bingo = 0, target = 0;
//
//	cout << "목표 빙고수는 ? : ";
//	cin >> target;
//
//	while (true)
//	{
//		system("cls");
//		//숫자를 5*5로 출력
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++)
//			{
//				if (num[i * 5 + j] == -1)
//					cout << "*" << "\t";
//				else
//					cout << num[i * 5 + j] << "\t";
//			}
//			cout << "\n";
//		}
//
//		cout << " target line : " << target << " bingo line : " << bingo << endl << endl;
//
//		if (bingo >= target)
//		{
//			cout << "##   ##   ####    ##   ## " << endl;
//			cout << "##   ##    ##     ###  ##" << endl;
//			cout << "##   ##    ##     #### ##" << endl;
//			cout << "## # ##    ##     ## ####" << endl;
//			cout << "#######    ##     ##  ###" << endl;
//			cout << "### ###    ##     ##   ##" << endl;
//			cout << "##   ##   ####    ##   ##" << endl;
//			system("pause");
//		}
//
//		cout << "숫자를 입력하세요(종료:0) : ";
//		int input;
//		cin >> input;
//		if (input == 0) break;
//		else if (input < 1 || input>25) continue;
//		for (int i = 0; i < 25; i++) {
//			if (input == num[i])
//			{
//				num[i] = -1;
//				break;
//			}
//		}
//
//		// 빙고 카운팅
//		bingo = 0;
//
//		for (int i = 0; i < 5; i++)
//		{
//			int h_star = 0, v_star = 0;
//			for (int j = 0; j < 5; j++)
//			{
//				if (num[5 * i + j] == -1)
//					h_star++; // 가로
//				if (num[5 * j + i] == -1)
//					v_star++; // 세로
//			}
//			if (h_star == 5) bingo++;
//			if (v_star == 5) bingo++;
//		}
//
//		int d_star = 0;
//		for (int i = 0; i < 25; i += 6)
//		{
//			if (num[i] == -1) d_star++;
//		}
//		if (d_star == 5) bingo++;
//
//		d_star = 0;
//		for (int i = 4; i <= 20; i += 4)
//		{
//			if (num[i] == -1) d_star++;
//		}
//		if (d_star == 5) bingo++;
//	}
//}

#pragma endregion

#pragma region 프로그래머스

string solution(string my_string, string letter) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] != letter[0]) answer += my_string[i];
    }
    return answer;
}

int main() {
    string str, letter;
    cin >> str >> letter;
    cout << solution(str, letter);
}

#pragma endregion
