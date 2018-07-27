#pragma once
/******************************************************************************
 * NAME:	    Flash.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the declaration of the Flash class.
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

class Flash : public iI2CSlave {
public:
  void notify(void);
  void attach(void);
  void detach(void);
};

/*****************************************************************************/
