#include <iostream>
#include <iomanip> //для setprecision
//fixed для фиксированного значения
int main()
{   const float pi{3.1415926};
    std::cout<<std::fixed<<std::setprecision(3)<<pi<<std::endl;}