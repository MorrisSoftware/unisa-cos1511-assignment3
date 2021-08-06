#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Aeroplane.h"

class Flight
{
private:
  std::string reference;
  std::string arrival_time;
  std::string departure_time;
  std::string destination_city;
  std::string origin_city;
  Aeroplane aeroplane;

public:
  Flight(std::string reference, std::string arrival_time, std::string departure_time, std::string origin_city, std::string destination_city, Aeroplane aeroplane);
  std::string getReference();
  std::string getArrivalTime();
  std::string getDepartureTime();
  std::string getOriginCity();
  std::string getDestinationCity();
  Aeroplane getAeroplane();
};
#endif
