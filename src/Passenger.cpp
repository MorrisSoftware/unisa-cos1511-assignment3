#include "Passenger.h"

Passenger::Passenger(std::string firstname, std::string lastname)
{
  _firstName = firstname;
  _lastName = lastname;
}


std::string Passenger::getName()
{
  return _firstName + _lastName;
}
