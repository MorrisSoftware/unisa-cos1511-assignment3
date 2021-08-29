#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

class Passenger
{
private:
  std::string _firstName;
  std::string _lastName;

public:
  Passenger(std::string firstname, std::string lastname);
};
#endif
