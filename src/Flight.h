#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>
#include "Aeroplane.h"
#include "TravelAgent.h"

class Flight
{
private:
  std::string _reference;
  std::string _arrivalTime;
  std::string _departureTime;
  std::string _destinationCity;
  std::string _originCity;
  Aeroplane _aeroplane;
  TravelAgent _travelAgent;

public:
  Flight();
  Flight(std::string reference, std::string arrival_time, std::string departure_time, std::string origin_city, std::string destination_city, Aeroplane aeroplane, TravelAgent travelAgent);
  std::string getReference();
  std::string getArrivalTime();
  std::string getDepartureTime();
  std::string getOriginCity();
  std::string getDestinationCity();
  Aeroplane getAeroplane();
};
#endif
