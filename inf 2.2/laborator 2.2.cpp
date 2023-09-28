#include<iostream>;
#include<locale>;
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int student, apple;
	cout << "\n ¬ведите количество студентов:";
	cin >> student;
	cout << "\n ¬ведите количество €блок:";
	cin >> apple;
	cout << "Oсталось €блок:" << apple % student;
}
