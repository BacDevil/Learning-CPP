#include <iostream>
#include <string>

void functionParameter(int a, int b, int c, int d, int e) // multiple value store 
{

    std::cout << "After sum three value = " << a + b + c + d + e; // addtion these container
}

int main()
{
    functionParameter(10, 10, 10, 10, 10); // calling the funtion
}