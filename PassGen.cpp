#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

void passGen(int a, int k) {
	ofstream file;
	file.open("passwords.txt");
	char *password = new char[a];
	for (int q = 0; q < k; q++) {

		for (int i = 0; i < a; i++) {
			switch (rand() % 3) {
			case 0:
				password[i] = rand() % 10 + 48;
				break;
			case 1:
				password[i] = rand() % 26 + 65;
				break;
			case 2:
				password[i] = rand() % 26 + 97;
			}
		}
		password[a] = '\0';
		cout << password << endl;
		file << password << endl;
	}
	file.close();
}

int main() {
	int lenght;
	int numb;
	setlocale(LC_ALL, "rus");
	cout << "Введите длину пароля : ";
	cin >> lenght;
	cout << "Введите количество паролей : ";
	cin >> numb;
	srand(time(NULL));
	passGen(lenght, numb);
	system("pause");
}