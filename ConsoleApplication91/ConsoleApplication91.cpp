#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	ifstream in{ "file.txt" };
	char mas[1024];
	in.getline(mas, 1024);
	cout << mas;
}

