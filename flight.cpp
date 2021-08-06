#ifndef FLIGHT_H
#include <string>
#include "Flight.h"

Flight::Flight(string reference, string arrival_time, string departure_time, string origin_city, string destination_city, Aeroplane aeroplane);
{
  reference = reference;
  arrival_time = arrival_time;
  departure_time = departure_time;
  origin_city = origin_city;
  destination_city = destination_city;
}

string getReference()
{
  return reference;
}
string getArrivalTime()
{
  return arrival_time;
}

string getDepartureTime()
{
  return departure_time;
};

string getOriginCity()
{
  return origin_city;
}
string getDestinationCity()
{
  return destination_city;
}

Aeroplane getAeroplane()
{
  return aeroplane;
};
