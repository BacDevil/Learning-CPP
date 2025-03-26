#include <iostream>
#include <string>

int main()
{
    int number = 1000; // this container take the value (1000)
    int(*pointer) = &number; // this container is take the address of (number) container


    std::cout << std::endl; // it's a new line command 
    std::cout << "Pointer to this address = " << (&pointer) << std::endl; // display the address of (number container)
    std::cout << "This is the value " << (*pointer) << " inside this " << (&pointer) << " address"; // display the what value take the container
    std::cout << std::endl;


}
