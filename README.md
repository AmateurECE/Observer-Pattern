This repository presents a half-baked implementation of the Observer Pattern to
solve the problem of broadcasting to multiple I2C slave devices on a
hypothetical I2C bus system. I2C Slave devices are observers, which "subscribe"
to the Subject, the I2C Master, by presenting their device id. The Master then
issues change-of-state notifications by broadcasting on the bus to the
registered listeners. Of course in the real world, the master would simply
broadcast using the device address 0. Observers may do as they please with this
notification.
