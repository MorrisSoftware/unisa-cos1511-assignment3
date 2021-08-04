#include <string>
#include "Plane.cpp"

class Flight
{
private:
  string reference;
  string arrival_time;
  string departure_time;
  Plane plane;

public:
  Flight(string reference, string arrival_time, string departure_time, plane::plane plane);
  string getReference();
  string getArrivalTime();
  string getDepartureTime();
};

Flight::Flight(string reference, string arrival_time, string departure_time)
{
}
