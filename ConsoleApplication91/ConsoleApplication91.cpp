#include <iostream>
#include <fstream>
using namespace std;
void filterText(char* mas, int size, int a) {
	for (int i = 0; mas[i] != '\0'; i++) {
		if (mas[i] >= 65 && mas[i] <= 90 || mas[i] >= 97 && mas[i] <= 122) {
			cout << ' ';
		}
		else {
			cout << mas[i];
		}
	}

}
void filter1(char* mas) {
	for (int i = 0; mas[i] != '\0'; i++) {
		if (mas[i] >= 65 && mas[i] <= 90 || mas[i] >= 97 && mas[i] <= 122) {
			cout << ' ';
		}
		else {
			cout << mas[i];
		}
	}
}
void filter2(char* mas) {
	for (int i = 0; mas[i] != '\0'; i++) {
		if (mas[i] >= 192 && mas[i] <= 255) {
			mas[i] = ' ';
		}
	}
}
void filter3(char* mas) {

}
void filter4(char* mas) {
	for (int i = 0; mas[i] != '\0'; i++) {
		if (mas[i] >= 48 && mas[i] <= 57) {
			mas[i] = ' ';
		}
	}
}
void Menu() {
    cout << "Выберите какой фильтр включить(1/0):\n";
    cout << "1 - Символы латинского алфавита\n";
    cout << "2 - Символы кириллицы\n";
    cout << "3 - Символы пунктуации\n";
    cout << "4 - Цифры\n";
}
int main()
{
	setlocale(0, "rus");
	ifstream in{ "file.txt" };
	char mas[1024];
	in.getline(mas, 1024);
	cout << mas << endl << endl;
	Menu();
	bool a, b, c, d;
	cin >> a >> b >> c >> d;
	/*filterText(mas, 1024, a);
	cout << endl << endl << mas;*/

	/*for (int i = 0; i <= 255; i++) {
		cout << i << ' ' << (char)i << endl;
	}*/

	for (int i = 0; mas[i] != '\0'; i++) {		
		if (a && (mas[i] >= 65 && mas[i] <= 90 || mas[i] >= 97 && mas[i] <= 122)) {
			cout << ' ';
		}
		else if (b && (mas[i] >= 65 && mas[i] <= 90 || mas[i] >= 97 && mas[i] <= 122)) {
			cout << ' ';
		}

		else {
			cout << mas[i];
		}
	}
}

