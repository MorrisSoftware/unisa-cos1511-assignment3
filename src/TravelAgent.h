#ifndef TRAVELAGENT_H
#define TRAVELAGENT_H
#include <string>

class TravelAgent
{
private:
  std::string _firstName;
  std::string _lastName;
  std::string _contactNumber;

public:
  TravelAgent();
  TravelAgent(std::string firstName, std::string lastName, std::string contactNumber);
  std::string getName();
  std::string getContactNumber();
};
#endif
