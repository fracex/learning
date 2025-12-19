#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int R,r;
	cout<<"Введите внутренний радиус кольца r:"<<endl;
	cin>>r;
	cout<<"Введите внешний радиус кольца R:"<<endl;
	cin>>R;
	cout<<"Площадь кольца = "<<M_PI*(pow(R,2)-pow(r,2))<<endl;
}