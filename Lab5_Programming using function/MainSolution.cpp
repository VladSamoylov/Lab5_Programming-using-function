#include "iostream"

using namespace std;

/**
 * @brief Перевіряє коректне значення типу int, яке ввів користувач до системи
 * @param i Значення типу int введене з клавіатури
 * @return Повертає коректне значення для подальшої роботи системи
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
 * @brief Перевіряє коректне значення типу float, яке ввів користувач до системи
 * @param i Значення типу float введене з клавіатури
 * @return Повертає коректне значення для подальшої роботи системи
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

int FucntionOfSignA(int* a) {

	if (*a < 0) {
		*a = -1;
	}
	else if (*a > 0) {
		*a = 1;
	}
	else {
		*a = 0;
	}
	return *a;
}

int AmountOfAandB(int* a, int* b) {

	return *a + *b;
}

/**
 * @brief Інтерфейс який дає змогу користувачу працювати з додатком
 * @param q Вибір виконуваного завдання, яке задається користувачем з клавіатури
 * @return Повертає сама себе для продовження роботи користувача з додатком
*/
int MenuOfSolution(int* q) {
	int x, y, sum;

	switch (*q) {
	case 1:
		cout << "\n__Task A__\n";
		cout << "Enter x: ";
		cin >> x;
		x = CheckIntValue(&x);
		cout << "\nEnter y: ";
		cin >> y;
		y = CheckIntValue(&y);
		x = FucntionOfSignA(&x);
		y = FucntionOfSignA(&y);
		sum = AmountOfAandB(&x, &y);
		cout << "\nSuma of sign x + sign y: ";
		cout << sum << endl;
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
	cout << "Task A) Fucntion Of Sign X + Sign Y - Enter 1\n";
	cout << "Task B) Find the team goes second place - Enter 2\n";
	cout << "Task C) Calculate Amount Of Abs Negative Elements - Enter 3\n";
	cout << "Task D) Amount Sequence Members - Enter 4\n";
	cout << "------------------------------------------------------------\n";
	cin >> q;
	q = CheckIntValue(&q);
	MenuOfSolution(&q);

	return main();
}