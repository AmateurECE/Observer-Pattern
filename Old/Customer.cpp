#include "Customer.hpp"

#include <iostream>

bool Customer::orderReady(std::string drinkPrepared)
{
	std::cout << "Made the drink" << drinkPrepared << std::endl;
	return (drinkPrepared == this->drinkOrdered);
}