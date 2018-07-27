/******************************************************************************
 * NAME:	    CoffeeAttendant.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the CoffeeAttendant class.
 *
 * CREATED:	    07/23/2018
 *
 * LAST EDITED:	    07/23/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/
 
#include <iostream>

#include "CoffeeAttendant.hpp"
#include "WaitingCustomer.hpp"

using namespace std;

/******************************************************************************
 * CLASS METHODS
 ***/

void CoffeeAttendant::takeOrder(WaitingCustomer & customer)
{
	this->customerList.push_back(&customer);
}

void CoffeeAttendant::prepareDrink(string drinkToPrepare)
{
	std::cout << "Preparing a " << drinkToPrepare << std::endl;
	this->completedDrink = drinkToPrepare;
}

void CoffeeAttendant::callOutCompletedOrder()
{
	for (size_t i = 0; i < this->customerList.size(); i++) {
		if (this->customerList[i]->orderReady(this->completedDrink)) {
			this->customerList.erase(this->customerList.begin() + i);
			break;
		}
	}
}

/*****************************************************************************/
