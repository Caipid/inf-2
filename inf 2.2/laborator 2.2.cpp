#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int student, apple;
	cout << "\n Введите количество студентов:";
	cin >> student;
	cout << "\n Введите количество яблок:";
	cin >> apple;
	cout << "Осталось яблок:" << apple % student;
}
