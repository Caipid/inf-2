#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int student, apple;
	cout << "\n ������� ���������� ���������:";
	cin >> student;
	cout << "\n ������� ���������� �����:";
	cin >> apple;
	cout << "O������� �����:" << apple % student;
}
