#include <string>
#include "Flight.hpp"

Flight::Flight(string reference, string arrival_time, string departure_time, Aeroplane aeroplane);
{
  reference = reference;
  arrival_time = arrival_time;
  departure_time = departure_time;
}

string getReference(){
  return reference;
}
string getArrivalTime(){
  return arrival_time;
}
string getDepartureTime(){
  return departure_time;
};
Aeroplane getAeroplane(){
  return aeroplane;
};

