#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const float pii{3.14};
    float pi(2);
    cout<<pi;
    int r;
    cout<<"Введите радуис окружноти:\n";
    cin>>r;
    cout<<"Длина окружности = "<<2*pi*r<<endl;
    cout<<"Площадь окружности = "<<pi*pow(r, 2);
}