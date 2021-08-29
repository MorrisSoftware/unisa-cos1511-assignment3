#include "Seat.h"

Seat::Seat(){}

Seat::Seat(char row, int number, TicketClass ticketClass, bool booked)
{
  BASE_COST = 1600.00;

  _row = row;
  _number = number;
  _ticketClass = ticketClass;
  _booked = booked;
}

int Seat::getNumber()
{
  return _number;
}

char Seat::getRow()
{
  return _row;
}

float Seat::getCost()
{
  return BASE_COST * _ticketClass.getMarkup();
}

TicketClass Seat::getTicketClass()
{
  return _ticketClass;
}

bool Seat::getBooked()
{
  return _booked;
}

void Seat::setBooked(bool booked)
{
  _booked = booked;
}
