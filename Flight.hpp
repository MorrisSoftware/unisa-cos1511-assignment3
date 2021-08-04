#include <string>
#include "Aeroplane.hpp"

class Flight
{
private:
  string reference;
  string arrival_time;
  string departure_time;
  string destination_city;
  string origin_city;
  Aeroplane aeroplane;

public:
  Flight(string reference, string arrival_time, string departure_time, Aeroplane aeroplane);
  string getReference();
  string getArrivalTime();
  string getDepartureTime();
  string getOriginCity();
  string getDestinationCity();
  Aeroplane getAeroplane();
};
