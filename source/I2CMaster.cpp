/******************************************************************************
 * NAME:	    I2CMaster.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the implementation of the I2CMaster class.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/27/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <vector>

#include "I2CMaster.hpp"
#include "iI2CSlave.hpp"

/******************************************************************************
 * CLASS METHODS
 ***/

I2CMaster::~I2CMaster() {
  this->detachAll();
}

/* TODO: Maybe this should take a State? */
void I2CMaster::broadcast(void) const
{
  for (std::vector<iI2CSlave*>::const_iterator iter = this->slaves.begin();
       iter != this->slaves.end(); iter++)
    (*iter)->notify();
}

void I2CMaster::registerSlave(iI2CSlave * slave)
{
  this->slaves.push_back(slave);
  slave->attach();
}

void I2CMaster::detachAll()
{
  for (std::vector<iI2CSlave*>::const_iterator iter = this->slaves.begin();
       iter != this->slaves.end(); iter++)
    (*iter)->detach();
}


/*****************************************************************************/
