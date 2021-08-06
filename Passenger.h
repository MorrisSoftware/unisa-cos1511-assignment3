#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>

class Passenger
{
private:
  std::string firstName;
  std::string lastName;

public:
  Passenger(std::string firstname, std::string lastname);
};
#endif
