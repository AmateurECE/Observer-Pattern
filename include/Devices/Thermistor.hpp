#pragma once
/******************************************************************************
 * NAME:	    Thermistor.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the declaration of the Thermistor class.
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
 * CLASS DEFINITIONS
 ***/

class Thermistor : public iI2CSlave {
public:
  void notify(void);
  void attach(void);
  void detach(void);
};

/*****************************************************************************/
