#include <iostream>
#include "greeter.h"

std::string gr::Greeter::greeter(std::string alpha)
{

	std::cin >> alpha;
	return ("Hello, " + alpha);

};