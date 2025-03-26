#include <iostream>

/* i am not using this command for codding */
// using namespace std;

int main()
{
    int x;
    std::cout << "Please enter a value for x variable: ";
    std::cin >> x;
    int y = 10;

    if (x == y)
    {
        std::cout << "Nice brother, Your value is matching with the x variable";  // THIS CODE WILL BE EXECUTE WHEN YOU ENTER EQUAL VALUE  ( X = 10 + Y = 10 )
    }
    else if (y < x)
    {
        std::cout << "YOU ENTER A VALUE OF GREATER THAN 10";  // THIS CODE WILL BE EXECUTE WHEN YOU ENTERED GREATER THAN 10 
    }
    else
    {
        std::cout << "NOT MATHING ALL OF CODE YOU ENTERED" << std::endl;
    }
}