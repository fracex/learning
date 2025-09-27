#include <iostream>
int main()
{
    int a;
    std::cin>>a;
    int b{a+1};
    int c{a-1};
    std::cout<<"Следующее за числом "<<a<<" число - "<<b<<std::endl;
    std::cout<<"Для числа "<<a<<" предыдущее число - "<<c;
}