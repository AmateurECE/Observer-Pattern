#pragma once
/******************************************************************************
 * NAME:	    Barometer.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the declaration of the Barometer class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/27/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include "iI2CSlave.hpp"

/******************************************************************************
 * CLASS DECLARATIONS
 ***/

class Barometer : public iI2CSlave {
public:
  void notify(void);
  void attach(void);
  void detach(void);
};

/*****************************************************************************/
