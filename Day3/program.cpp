#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

#pragma region ����

//int main() {
//	int length = 0;
//	
//	cout << "�� �ο��� ���� : ";
//	cin >> length;
//
//	cout << "������ �̸��� �� �ο����� �°� �����ϼ���." << endl;
//
//	string* arr = new string[length];
//
//	for (int i = 0; i < length; i++) {
//		cin >> arr[i];
//	}
//
//	while(true)
//	{
//		cout << "1�� ������ �̱Ⱑ ���۵˴ϴ�. ����� 0�� ��������.";
//
//		int input = -1;
//		cin >> input;
//
//		if (input == 0) break;
//		else if (input == 1) {
//			cout << "�̱⸦ ���� �մϴ�." << endl;
//			Sleep(1000);
//			srand((unsigned int)time(NULL));
//			int random = rand() % length;
//			cout << "��ǥ�� ��� : " << arr[random];
//		}
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region ������ ����

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
//	cout << "2 ������ ���� ������ �߰��� ������ �Է��ϼ��� : ";
//	cin >> x1 >> x2 >> a;
//
//	add(x1, x2, a);
//	add(&x1, &x2, a);
//
//	cout << "2 ���� ���������� ������ �߰��� ���� ������ " << x1 << " " << x2;
//}

#pragma endregion

#pragma region �̳�

//int main() {
//	enum type { ���� = 1, ����, �� };
//	int win = 0;
//	int lose = 0;
//	int same = 0;
//
//	for(int i = 0; i < 10; i++)
//	{
//		cout << "��ȣ�� �����ϼ���." << endl << "1. ���� 2. ���� 3. �� 4. ����" << endl << "player : ";
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
//		case ����:
//			cout << "bot : " << "����" << endl;
//			break;
//		case ����:
//			cout << "bot : " << "����" << endl;
//			break;
//		case ��:
//			cout << "bot : " << "��" << endl;
//			break;
//		}
//
//		/*if (player == bot)
//		{
//			same++;
//			cout << "*****" << "���º�" << "*****" << endl;
//			cout << "�� : " << win << " �� : " << lose << " ���º� : " << same << endl;
//			system("pause");
//			continue;
//		}*/
//		/*switch (player)
//		{
//		case ����:
//			switch (bot)
//			{
//			case ����:
//				win++;
//				cout << "*****" << "player �¸�" << "*****" << endl;
//				break;
//			case ��:
//				lose++;
//				cout << "*****" << "bot �¸�" << "*****" << endl;
//				break;
//			}
//			break;
//		case ����:
//			switch (bot)
//			{
//			case ��:
//				win++;
//				cout << "*****" << "player �¸�" << "*****" << endl;
//				break;
//			case ����:
//				lose++;
//				cout << "*****" << "bot �¸�" << "*****" << endl;
//				break;
//			}
//			break;
//		case ��:
//			switch (bot)
//			{
//			case ����:
//				win++;
//				cout << "*****" << "player �¸�" << "*****" << endl;
//				break;
//			case ����:
//				lose++;
//				cout << "*****" << "bot �¸�" << "*****" << endl;
//				break;
//			}
//			break;
//		}*/
//		int result = player - bot;
//		switch (result)
//		{
//		case 0:
//			same++;
//			cout << "*****" << "���º�" << "*****" << endl;
//			break;
//		case 1:
//		case -2:
//			win++;
//			cout << "*****" << "player �¸�" << "*****" << endl;
//			break;
//		default:
//			lose++;
//			cout << "*****" << "bot �¸�" << "*****" << endl;
//			break;
//		}
//		cout << "�� : " << win << " �� : " << lose << " ���º� : " << same << endl;
//		Sleep(1000);
//		if (i == 9) break;
//		system("cls");
//	}
//}

#pragma endregion

#pragma region ����

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
//	cout << "��ǥ ������� ? : ";
//	cin >> target;
//
//	while (true)
//	{
//		system("cls");
//		//���ڸ� 5*5�� ���
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
//		cout << "���ڸ� �Է��ϼ���(����:0) : ";
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
//		// ���� ī����
//		bingo = 0;
//
//		for (int i = 0; i < 5; i++)
//		{
//			int h_star = 0, v_star = 0;
//			for (int j = 0; j < 5; j++)
//			{
//				if (num[5 * i + j] == -1)
//					h_star++; // ����
//				if (num[5 * j + i] == -1)
//					v_star++; // ����
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

#pragma region ���α׷��ӽ�

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
