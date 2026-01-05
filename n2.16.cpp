#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	setlocale(LC_ALL, "rus");
	wcout << L"Введите катеты a, b:" << endl;
	cin >> a; wcout << L"\n";
	cin >> b; wcout << L"\n";
	wcout << L"Периметр равен: " << sqrt(pow(a, 2) + pow(b, 2)) + a + b;
}