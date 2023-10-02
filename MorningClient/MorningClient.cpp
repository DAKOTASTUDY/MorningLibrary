#include <iostream>

#include "greeter.h"

int main()
{
    
    std::string beta;
    std::cout << "\n\t Please, enter your name: " << std::endl;
    
    std::string f = gr::Greeter::greeter(beta);
    std::cout  << f << std::endl;

}