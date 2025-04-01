#include <iostream>

void whileFunction()
{
    int value = 0;
    while (value <= 10)
    {
        std::cout << "Nice" << std::endl;
        value++;
    }
}

int main()
{
    whileFunction();
}