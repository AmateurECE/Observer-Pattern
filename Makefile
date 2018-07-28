###############################################################################
# NAME:		    Makefile
#
# AUTHOR:	    Ethan D. Twardy <edtwardy@mtu.edu>
#
# DESCRIPTION:	    The makefile for the project.
#
# CREATED:	    07/27/2018
#
# LAST EDITED:	    07/27/2018
###

CC=g++
CPPFLAGS = -g -O0 -Wall -Wextra -I include/ -std=c++11
OBJS=source/Main.o \
source/I2CMaster.o \
source/Devices/Accelerometer.o \
source/Devices/Barometer.o \
source/Devices/Flash.o \
source/Devices/Thermistor.o

source/Main: $(OBJS)

$(OBJS):

clean:
	rm -f `find . | grep '\.o'`
	rm -f source/Main

##############################################################################
