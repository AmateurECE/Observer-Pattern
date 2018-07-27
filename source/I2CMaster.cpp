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
  std::vector<iI2CSlave>::iterator iter;
  for (iter = this->slaves.begin(); iter != this->slaves.end(); it++)
    iter->notify();
}

void I2CMaster::registerSlave(iI2CSlave * slave)
{
  this->slaves.push_back(slave);
  slave->attach();
}

void I2CMaster::detachAll()
{
  std::vector<iI2CSlave>::iterator iter;
  for (iter = this->slaves.begin(); iter != this->slaves.end(); it++)
    iter->detach();
}


/*****************************************************************************/
