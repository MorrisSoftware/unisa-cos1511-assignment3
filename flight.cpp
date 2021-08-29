#include <string>
#include "Flight.h"

Flight::Flight(std::string reference, std::string arrival_time, std::string departure_time, std::string origin_city, std::string destination_city, Aeroplane aeroplane)
{
  reference = reference;
  arrival_time = arrival_time;
  departure_time = departure_time;
  origin_city = origin_city;
  destination_city = destination_city;
}

std::string Flight::getReference()
{
  return reference;
}
std::string Flight::getArrivalTime()
{
  return arrival_time;
}

std::string Flight::getDepartureTime()
{
  return departure_time;
}

std::string Flight::getOriginCity()
{
  return origin_city;
}

std::string Flight::getDestinationCity()
{
  return destination_city;
}

Aeroplane Flight::getAeroplane()
{
  return aeroplane;
}
