#include <string>
#include "Seat.hpp"

  Seat::Seat(int number, char row, TicketClass ticketClass, bool booked)
  {
    number = number;
    row = row;
    ticketClass = ticketClass;
    booked = booked;
  }

  string Seat::getNumber()
  {
    return number;
  }

  char Seat::getRow()
  {
    return row;
  }

  float Seat::getCost()
  {
    return BASE_COST * ticketClass.markup;
  }

  int getTicketClass()
  {
    return ticketClass;
  }

  bool Seat::getBooked()
  {
    return booked;
  }

  void Seat::setBooked(bool booked)
  {
    booked = booked;
  }

