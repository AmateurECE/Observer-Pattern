#pragma once
/******************************************************************************
 * NAME:	    Accelerometer.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the declaration of the Accelerometer class, a
 *		    derived class of iI2CSlave.
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

class Accelerometer : public iI2CSlave {
public:
  void notify(void);
  void attach(void);
  void detach(void);
};

/*****************************************************************************/
