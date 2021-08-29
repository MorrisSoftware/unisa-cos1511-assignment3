#include <string>
#include "TravelAgent.h"

TravelAgent::TravelAgent() {}

TravelAgent::TravelAgent(std::string firstName, std::string lastName, std::string contactNumber)
{
  _firstName = firstName;
  _lastName = lastName;
  _contactNumber = contactNumber;
}

std::string TravelAgent::getName()
{
  return _firstName + _lastName;
}

std::string TravelAgent::getContactNumber()
{
  return _contactNumber;
}
