#include <iostream>
#include "Aeroplane.h"
#include "Flight.h"
#include "Passenger.h"
#include "Seat.h"
#include "TicketClass.h"

using namespace std;

int main()
{
  const std::string WELCOME_MESSAGE = "Welcome to COS1511 Flight Booking System";

  std::string firstName;
  std::string lastName;

  std::cout << WELCOME_MESSAGE;
  std::cout << endl;

  std::cout << "Please enter your fullname:" << endl;
  std::cin >> firstName >> lastName;

  cout << firstName << endl << lastName << endl;

  Aeroplane plane = Aeroplane(1, 1, "COS1511");
  TravelAgent agent = TravelAgent("Gavin", "Morris", "+2723456789");

  std::map<int, Flight> flightOptions;

  flightOptions[1] = Flight("Flight001", "07:00", "09:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[2] = Flight("Flight002", "09:00", "11:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[3] = Flight("Flight003", "11:00", "13:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[4] = Flight("Flight004", "13:00", "15:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[5] = Flight("Flight005", "15:00", "17:30", "Johannesburg", "Cape Town", plane, agent);

  cout << plane.getTailNumber();

  return 0;
}
