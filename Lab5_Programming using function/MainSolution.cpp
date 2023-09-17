#include "iostream"
#include "math.h"

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
 * @brief �������� ��������� ����� �������
 * @param n ʳ������ �����
 * @param m ʳ������ ��������
 * @return ��������� ����� �������
*/
pair<int, int> CheckMinMembersOfMatrix(int* n, int* m) {

	if (*n < 2) {
		cout << "You enter wrong data! Please enter colums (min members - 2): \n";
		cin >> *n;
		*n = CheckIntValue(&*n);
	}
	if (*m < 2) {
		cout << "You enter wrong data! Please enter rows (min members - 2): \n";
		cin >> *m;
		*m = CheckIntValue(&*m);
	}
	return make_pair(*n, *m);
}

/**
 * @brief �������� �������� ������� ��������, ���� ������� ���� �����
 * @param n ʳ������ �������� ������ �������� ������������ � ���������
 * @return ������� �������� �������� ������� �������� ������
*/
int CheckMinMembersOfMassive(int* n) {

	if (*n <= 0) {
		cout << "You enter wrong data! Please enter correct data (min members - 0): \n";
		cin >> *n;
		*n = CheckIntValue(&*n);
	}
	return *n;
}

/**
 * @brief ������ sign �� ����� �������� ������������
 * @param a ����� ������ ������������
 * @return Sign �� ����� �
*/
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

/**
 * @brief ��������� ���� ���� �����
 * @param a ����� ����� 
 * @param b ����� ����� 
 * @return ���� ������� � ������� �����
*/
int AmountOfAandB(int* a, int* b) {

	return *a + *b;
}

/**
 * @brief ��������� � ���������� ������� ����� �������
 * @param n ʳ������ ����� �������
 * @param m ʳ������ ������ �������
 * @return �������� �������
*/
double** CreatedAndFillMatrix(int* n, int* m) {
	double** matrix = new  double*[*n];

	for (int i = 0; i < *n; i++) {
		matrix[i] = new double[*m];
	}
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *m; j++) {
			if (i != j) {
				matrix[i][j] = asin((i - j + 3) / 15) + pow(-0.75, i + 2) * log10(abs((5 * i - j) / (pow(i, 2) - pow(j, 3))) + 2);
				
			}
			else {
				matrix[i][j] = log(i + 0.5 * j - 1);
			}
		}
	}
	cout << "Matrix: \n";
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *m; j++) {
			cout << matrix[i][j] << '|';
		}
		cout << endl;
	}
	return matrix;
}

/**
 * @brief ������� ������ ����������� � �������� ������ ������� �������, ��������� � �������
 * @param matrix ������� ��� ���������� �������
 * @param n ʳ������ �������� ������ ������� �������
 * @return ����������� ������
*/
double* ReturnVectorRaisedSquare(double** matrix, int* n) {
	double* vector = new double[*n];

	for (int i = 0; i < *n; i++) {
		vector[i] = pow(matrix[*n - 1 - i][i], 2);
	}
	cout << "\nVector elements of the lateral diagonal of the matrix: ";
	for (int i = 0; i < *n; i++) {
		cout << vector[i] << " ";
	}
	cout << endl;
	return vector;
}

/**
 * @brief �������� ������� ������ �������� �������
 * @param vector ������ ����������� � �������
 * @param n ʳ������ �������� �������
*/
void CalculateTheProductVectorPairedElements(double* vector, int* n) {
	double product = 0;

	for (int i = 1; i <= *n; i++) {
		if (i % 2 == 0) {
			if (i == 2) {
				product = vector[i - 1];
			}
			else {
				product *= vector[i - 1];
			}			
		}
	}
	cout << "The Product Vector Paired Elements: ";
	cout << product << endl;;
}

/**
 * @brief �������� ���'��, ����������� � ������� �
 * @param matrix ������� ��� ��������
 * @param vector ������ ��� ��������
 * @param n ʳ������ �������� �������
*/
void ClearMemory(double** matrix, double* vector, int* n) {

	for (int i = 0; i < *n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] vector;
}

void PairHaveCommonDivisors(int* n) {
	int* seq = new int[*n];

	for (int i = 0; i < *n; i++) {
		cout << "Enter elements of sequence #" << i + 1 << ": ";
		cin >> seq[i];
	}
	for (int i = 0; i < *n - 1; i++) {
		for (int j = 0; j < *n - 1; j++) {

		}
		cout << "First number: " << seq[i] << " | Second number: " << seq[i + 1] << endl;
		int div = 0;
		do {
			if (seq[i] > seq[i + 1]) {
				if (seq[i] % (seq[i + 1] - div) == 0 && seq[i + 1] % (seq[i + 1] - div) == 0) {
					cout << "Common divisors: " << seq[i + 1] - div << endl;
				}
			}
			else if (seq[i] < seq[i + 1]) {
				if (seq[i + 1] % (seq[i] - div) == 0 && seq[i] % (seq[i] - div) == 0) {
					cout << "Common divisors: " << seq[i] - div << endl;
				}
			}			
			div++;
			
		} while (seq[i + 1] - div != 0 && seq[i] - div != 0);
	}

}

/**
 * @brief ��������� ���� �� ����� ����������� ��������� � ��������
 * @param q ���� ������������ ��������, ��� �������� ������������ � ���������
 * @return ������� ���� ���� ��� ����������� ������ ����������� � ��������
*/
int MenuOfSolution(int* q) {
	int x, y, sum, n, m;
	double** matrix;
	double* vector;
	pair <int, int> check;

	switch (*q) {
	case 1:
		cout << "\n__Task A__\n";
		cout << "Enter x: ";
		cin >> x;
		x = CheckIntValue(&x);
		x = FucntionOfSignA(&x);
		cout << "\nEnter y: ";
		cin >> y;
		y = CheckIntValue(&y);
		y = FucntionOfSignA(&y);
		sum = AmountOfAandB(&x, &y);
		cout << "\nSuma of sign x + sign y: ";
		cout << sum << endl;
		break;
	case 2:
		cout << "\n__Task B__\n";
		cout << "Enter numbers of sequence: ";
		cin >> n;
		n = CheckIntValue(&n);
		n = CheckMinMembersOfMassive(&n);
		PairHaveCommonDivisors(&n);
		
		break;
	case 3:
		cout << "\n__Task C__\n";
		cout << "Enter numbers of colums: ";
		cin >> n;
		n = CheckIntValue(&n);
		m = n;
		check = CheckMinMembersOfMatrix(&n, &m);
		n = check.first;
		m = n;
		matrix = CreatedAndFillMatrix(&n, &m);
		vector = ReturnVectorRaisedSquare(matrix, &n);
		CalculateTheProductVectorPairedElements(vector, &n);
		ClearMemory(matrix, vector, &n);
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
	cout << "Task C) Calculate The Product Vector Paired Elements - Enter 3\n";
	cout << "Task D) Amount Sequence Members - Enter 4\n";
	cout << "------------------------------------------------------------\n";
	cin >> q;
	q = CheckIntValue(&q);
	MenuOfSolution(&q);

	return main();
}