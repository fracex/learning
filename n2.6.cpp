#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    int R{6350}, h;
    cout<<"Радиус земли = "<<R<<"\n";
    cout<<"Введите высоту над землей:\n";
    cin>>h;
    cout<<"Расстояние до горизонта = "<<sqrt((h*h)+(2*R*h))<<endl;
}