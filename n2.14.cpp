#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b;
	cout<<"Введите катеты прямоугольника:"<<endl;
	cin>>a; cin>>b;
	cout<<"Гипотенуза = "<<sqrt(pow(a,2)+pow(b,2))<<endl;
}