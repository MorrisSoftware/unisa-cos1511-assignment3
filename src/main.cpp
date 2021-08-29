#include <iostream>
#include <fstream>
#include <iomanip>
#include <typeinfo>

#include "Aeroplane.h"
#include "Flight.h"
#include "Passenger.h"
#include "Seat.h"
#include "TicketClass.h"

using namespace std;

Passenger passengerDetails()
{
  std::string firstName;
  std::string lastName;

  std::cout << "Please enter your fullname:" << endl;
  std::cin >> firstName >> lastName;

  Passenger passenger = Passenger(firstName,lastName);

  return passenger;
}

Flight flightBooking()
{
  int chosenOption;
  std::map<int, Flight> flightOptions;
  Aeroplane plane = Aeroplane(10, 5, "COS1511");
  TravelAgent agent = TravelAgent("Gavin", "Morris", "+2723456789");

  flightOptions[1] = Flight("Flight001", "07:00", "09:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[2] = Flight("Flight002", "09:00", "11:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[3] = Flight("Flight003", "11:00", "13:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[4] = Flight("Flight004", "13:00", "15:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[5] = Flight("Flight005", "15:00", "17:30", "Johannesburg", "Cape Town", plane, agent);

  cout << "The available travel times for flights are: \n" << endl;

  std::cout << std::left << std::setw(25) << " " << std::setw(25) << "Departure" << std::setw(25) << "Arrival \n" << std::endl;

  std::map<int, Flight>::iterator flight;

  for (flight = flightOptions.begin(); flight != flightOptions.end(); ++flight)
  {
    std::cout << std::left << std::setw(25) << flight->first << std::setw(25) << flight->second.getDepartureTime() << std::setw(25) << flight->second.getArrivalTime() << std::endl;
  }

  cout << "Choose the time by entering the option number from the displayed list: " << endl;
  std::cin >> chosenOption;

  flight = flightOptions.find(chosenOption);
  while (flight == flightOptions.end())
    {
      cout << "Incorrect option! please choose from 1 - 5 " << endl;
      std::cin >> chosenOption;
      flight = flightOptions.find(chosenOption);
    }

  return flightOptions[chosenOption];
}

Seat chooseSeat(Flight flight)
{
  Flight _flight = flight;
  std::map<string,Seat> seats = _flight.getAeroplane().getSeats();

  cout << "The available seats for " << flight.getDepartureTime() << " are as follows: " << endl;

  std::map<std::string, Seat>::iterator seat;

  for (seat = seats.begin(); seat != seats.end(); ++seat)
  {
    if (seat->second.getNumber() % _flight.getAeroplane().getSeatsPerRow() == 0)
    {
      std::cout << std::left << std::setw(25) << seat->first << "\n" << std::endl;
    }
    else
    {
      std::cout << std::left << std::setw(25) << seat->first  << std::endl;
    }


  }

  return seats["1A"];
}

int main()
{
  const std::string WELCOME_MESSAGE = "Welcome to COS1511 Flight Booking System";



  std::cout << WELCOME_MESSAGE;
  std::cout << endl;

  Passenger passenger = passengerDetails();
  std::cout << endl;
  Flight flight = flightBooking();
  std::cout << endl;
  Seat seat = chooseSeat(flight);

  cout << passenger.getName() << " booked for flight: " << flight.getReference() << ", seat number: " << seat.getRow();

  return 0;
}

