#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b;
	cout<<"Введите число а:";
	cin>>a; cout<<"Введите число b:";
	cin>>b; cout<<"Среднее арифметическое: ";
	cout<<(a+b)/2; cout<<"\n";
	cout<<"Среднее геометрическое: "<<sqrt(a+b)<<endl;
}