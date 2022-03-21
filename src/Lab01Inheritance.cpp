#include <iostream>  // allows program to output data to the screen
#include "Derived1.h"
#include "Derived2.h"


// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_semothing();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main