#pragma once
/******************************************************************************
 * NAME:	    I2CMaster.hpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the class declaration for the I2C Master device.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/27/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include <vector>

#include "iI2CSlave.hpp"

/******************************************************************************
 * CLASS DECLARATIONS
 ***/

class I2CMaster {
public:
  I2CMaster() = default;
  ~I2CMaster();
  void broadcast(void) const; /* TODO: Maybe this should take a State? */
  /* Ray: The wikipedia article on Obs. Pat. seems to list the 'attach'
   * behavior as belonging to the Observer. This seems to make more sense
   * logistically? (e.g. Network devices 'attach' to a router by dhcp req).
   * However when relationships exist only on the call stack, it seems much
   * more practical to make the 'attach' behavior a part of the Subject.
   * Thoughts?
   */
  void registerSlave(iI2CSlave * slave);
  void detachAll();

private:
  std::vector<iI2CSlave*> slaves;
};

/*****************************************************************************/
