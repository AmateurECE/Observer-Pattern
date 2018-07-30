/******************************************************************************
 * NAME:	    CoffeeShop.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the main class implementing the Observer Pattern.
 *
 * CREATED:	    07/30/2018
 *
 * LAST EDITED:	    07/30/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include "CoffeeAttendant.hpp"
#include "Customer.hpp"

/******************************************************************************
 * MAIN
 ***/

int main()
{
  Customer e("macchiato", "Ethan");
  Customer l("latte", "Leslie");
  Customer s("mocha", "Sam");

  CoffeeAttendant barista;

  barista.takeOrder(e);
  barista.takeOrder(l);
  barista.takeOrder(s);

  /* Ethan's Drink */
  barista.prepareDrink("macchiato");
  barista.callOutCompletedOrder();

  /* Leslie's Drink */
  barista.prepareDrink("latte");
  barista.callOutCompletedOrder();

  /* Sam's Drink */
  barista.prepareDrink("mocha");
  barista.callOutCompletedOrder();

  /* This drink wasn't ordered. */
  barista.prepareDrink("americano");
  barista.callOutCompletedOrder();
}

/*****************************************************************************/
