#pragma once
/******************************************************************************
 * NAME:	    iI2CSlave.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the interface for I2C Slave devices.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/27/2018
 ***/

/******************************************************************************
 * CLASS DECLARATIONS
 ***/

class iI2CSlave {
public:
  virtual void notify(void) = 0; /* TODO: Should take something? */
  virtual void attach(void) = 0; /* TODO: Should take I2CMaster? */
  virtual void detach(void) = 0; /* TODO: Should take I2CMaster? */
};

/*****************************************************************************/
