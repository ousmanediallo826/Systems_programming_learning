#include <iostream>
void references() {
    int a = 5;
    int& ref = a;
    ref = 10;
    std::cout << "Value of a: " << a << std::endl;
};
void pointer() 
{
    int var = 34;
    int* ptr = &var;
    *ptr = 43;
    std::cout << "Value: " << var << std::endl;
    references();
    std::cin.get();
}