/******************************************************************************
 * NAME:	    Main.cpp
 *
 * AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
 *
 * DESCRIPTION:	    Contains the Main class for testing and junk.
 *
 * CREATED:	    07/26/2018
 *
 * LAST EDITED:	    07/27/2018
 ***/

/******************************************************************************
 * INCLUDES
 ***/

#include "Devices/Accelerometer.hpp"
#include "Devices/Barometer.hpp"
#include "Devices/Flash.hpp"
#include "Devices/Thermistor.hpp"
#include "I2CMaster.hpp"

/******************************************************************************
 * MAIN
 ***/

int main()
{
  I2CMaster	master;
  Accelerometer accel;
  Barometer	humid;
  Flash		mem;
  Thermistor	thermo;

  master.registerSlave(&accel);
  // master.registerSlave(humid);
  // master.registerSlave(mem);
  // master.registerSlave(thermo);

  master.broadcast();
}

/*****************************************************************************/
