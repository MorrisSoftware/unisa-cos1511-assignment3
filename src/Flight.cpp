#include <string>
#include "Flight.h"

Flight::Flight(){}

Flight::Flight(std::string reference, std::string departure_time, std::string arrival_time, std::string origin_city, std::string destination_city, Aeroplane aeroplane, TravelAgent travelAgent)
{
  _reference = reference;
  _arrivalTime = arrival_time;
  _departureTime = departure_time;
  _originCity = origin_city;
  _destinationCity = destination_city;
  _aeroplane = aeroplane;
  _travelAgent = travelAgent;
}

std::string Flight::getReference()
{
  return _reference;
}
std::string Flight::getArrivalTime()
{
  return _arrivalTime;
}

std::string Flight::getDepartureTime()
{
  return _departureTime;
}

std::string Flight::getOriginCity()
{
  return _originCity;
}

std::string Flight::getDestinationCity()
{
  return _destinationCity;
}

Aeroplane Flight::getAeroplane()
{
  return _aeroplane;
}
