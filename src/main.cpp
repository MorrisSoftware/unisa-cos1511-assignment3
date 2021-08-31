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
  std::map<int, Flight>::iterator flight;
  Aeroplane plane = Aeroplane(10, 6, "COS1511");
  TravelAgent agent = TravelAgent("Gavin", "Morris", "+2723456789");

  flightOptions[1] = Flight("Flight001", "07:00", "09:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[2] = Flight("Flight002", "09:00", "11:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[3] = Flight("Flight003", "11:00", "13:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[4] = Flight("Flight004", "13:00", "15:30", "Johannesburg", "Cape Town", plane, agent);
  flightOptions[5] = Flight("Flight005", "15:00", "17:30", "Johannesburg", "Cape Town", plane, agent);

  cout << "The available travel times for flights are: \n" << endl;

  std::cout << std::left << std::setw(25) << "Departure" << std::setw(25) << "Arrival \n" << std::endl;

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

void printSeatPlan(Flight flight, std::map<std::string, Seat> seats)
{
  std::map<std::string, Seat>::iterator seat;

  std::cout << std::setprecision(2);
  std::cout << std::fixed;
  cout << "First class ("
       << flight.getAeroplane().getTicketClasses()["First Class"].getPrice()
       << ")"
       << "\n"
       << endl;

  for (seat = seats.begin(); seat != seats.end(); ++seat)
  {
    if (seat->second.getNumber() % _flight.getAeroplane().getSeatsPerRow() == 0)
    {
      std::cout << "|"
                << seat->second.getSeatNumber()
                << "|"
                << "\n";

      if ((int)seat->second.getRow() - 64 == _flight.getAeroplane().getNumberOfFirstClassRows())
      {
        std::cout << "\n"
                  << "Economy class ("
                  << _flight.getAeroplane().getTicketClasses()["Economy"].getPrice()
                  << ")"
                  << "\n"
                  << endl;
        }
    }
    else if (seat->second.getNumber() == _flight.getAeroplane().getSeatsPerRow() / 2)
    {
      std::cout << "|"
                << seat->second.getSeatNumber()
                << "|"
                << " --- ";
    }
    else
    {
      std::cout << "|"
                << seat->second.getSeatNumber();
    }
  }
}

Seat chooseSeat(Flight flight)
{
  std::string chosenSeat;
  std::map<std::string, Seat>::iterator seat;

  Flight _flight = flight;
  std::map<std::string,Seat> seats = _flight.getAeroplane().getSeats();

  cout << "The available seats for " << flight.getDepartureTime() << " are as follows: " << "\n" << endl;

  printSeatPlan(_flight, seats);

  cout << "\n" << "Booked seats are indicated with an asterisk \n" << endl;
  cout << "Please key in a seat number to choose a seat (e.g. A2): " << endl;
  cin >> chosenSeat;

  seat = seats.find(chosenSeat);
  while (seat == seats.end())
  {
    cout << "Please enter an appropriate seat number (e.g. A2) " << endl;
    std::cin >> chosenSeat;
    seat = seats.find(chosenSeat);
  }

  if (seats[chosenSeat].getBooked() == true)
  {
    cout << "\n" << "This seat is already taken, please choose another" << "\n" << endl;
    return chooseSeat(_flight);
  }
  else {
    return seats[chosenSeat];
  }
}

void printTicket(Flight flight, Seat seat, Passenger passenger, TravelAgent travelAgent)
{
  cout << "******************************" << "\n";
  cout << "Travel ticket for FLIGHT" << "\n";
  cout << "******************************" << "\n";
  cout << setw
       << "Name"
       << setw(5)
       << ":"
       << setw(5)
       << passenger.getName()
       << setw(5)
       <<"Travel Ticket class"
       << setw(5)
       << ":"
       << setw(5)
       << seat.getTicketClass().getTicketType()
       << "\n"
       << endl;
  cout << setw(5)
       << passenger.getName()
       << setw(5)
       << "Travel Ticket class"
       << setw(5)
       << ":"
       << setw(5)
       << seat.getTicketClass().getTicketType()
       << "\n"
       << endl;
}

int main()
{
  const std::string WELCOME_MESSAGE = "Welcome to COS1511 Flight Booking System";

  std::cout << WELCOME_MESSAGE << "\n";
  std::cout << endl;

  Passenger passenger = passengerDetails();
  std::cout << endl;
  Flight flight = flightBooking();
  std::cout << endl;
  Seat seat = chooseSeat(flight);
  std::cout << endl;

  cout << passenger.getName() << " booked for flight: " << flight.getReference() << ", seat number: " << seat.getRow();

  return 0;
}

