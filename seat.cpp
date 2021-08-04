#include <string>
#include "Seat.hpp"

Seat::Seat(char row, int number, TicketClass ticketClass, bool booked)
{
  row = row;
  number = number;
  ticketClass = ticketClass;
  booked = booked;
}

int Seat::getNumber()
{
  return number;
}

char Seat::getRow()
{
  return row;
}

float Seat::getCost()
{
  return BASE_COST * ticketClass.getMarkup();
}

TicketClass Seat::getTicketClass()
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
