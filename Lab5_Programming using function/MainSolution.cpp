#include "iostream"

using namespace std;

/**
 * @brief �������� �������� �������� ���� int, ��� ��� ���������� �� �������
 * @param i �������� ���� int ������� � ���������
 * @return ������� �������� �������� ��� �������� ������ �������
*/
int CheckIntValue(int* i) {

	cin.ignore(666, '\n');
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(666, '\n');
			cout << "You enter wrong data! Please enter correct data: \n";
			cin >> *i;
		}
		else {
			return *i;
		}
	}
}

/**
 * @brief �������� �������� �������� ���� float, ��� ��� ���������� �� �������
 * @param i �������� ���� float ������� � ���������
 * @return ������� �������� �������� ��� �������� ������ �������
*/
float CheckFloatValue(float* i) {

	cin.ignore(666, '\n');
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(666, '\n');
			cout << "You enter wrong data! Please enter correct data: \n";
			cin >> *i;
		}
		else {
			return *i;
		}
	}
}

/**
 * @brief ��������� ���� �� ����� ����������� ��������� � ��������
 * @param q ���� ������������ ��������, ��� �������� ������������ � ���������
 * @return ������� ���� ���� ��� ����������� ������ ����������� � ��������
*/
int MenuOfSolution(int* q) {

	switch (*q) {
	case 1:
		cout << "\n__Task A__\n";
		cout << "Enter amount members of masive A: ";
		
		break;
	case 2:
		cout << "\n__Task B__\n";
		cout << "Enter amount of Teams: ";
		
		break;
	case 3:
		cout << "\n__Task C__\n";
		cout << "Enter number of colums: ";
		
		break;
	case 4:
		cout << "\n__Task D__\n";
		cout << "Enter number of colums: ";
		
		break;
	default:
		cout << "\n__You don't enter any task for execution__\n";
		return 0;
	}
	return MenuOfSolution(q);
}

int main() {

	int q;
	cout << "\nCreated by Vladislav Samoilov / KNT - 223\n";

	cout << "--------Select task:--------\n";
	cout << "Task A) Fill masive A and created masive B - Enter 1\n";
	cout << "Task B) Find the team goes second place - Enter 2\n";
	cout << "Task C) Calculate Amount Of Abs Negative Elements - Enter 3\n";
	cout << "Task D) Amount Sequence Members - Enter 4\n";
	cout << "------------------------------------------------------------\n";
	cin >> q;
	q = CheckIntValue(&q);
	MenuOfSolution(&q);

	return main();
}