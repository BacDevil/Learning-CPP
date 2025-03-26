#include <iostream>
#include <string>


class Brands {
    public: // this is the privacy of class ( public / private / other )
    std::string number; // string data type
    int year; // int container for storing decimal numbers
    std::string mobile; // this is the string data type



    // function of redmi device
    void redmi() {
        std::cout << "Your Mobile brand is : " << mobile <<std::endl;
        std::cout << "Your Mobile Number is : " << number << std::endl;
        std::cout << "Your Mobile release on this year : " << year << std::endl;
    }

};



