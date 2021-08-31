#include "Seat.h"

Seat::Seat(){}

Seat::Seat(char row, int number, TicketClass ticketClass, bool booked)
{
  _row = row;
  _number = number;
  _ticketClass = ticketClass;
  _booked = booked;
}

int Seat::getNumber()
{
  return _number;
}

std::string Seat::getSeatNumber()
{
 if (_booked == true)
 {
   return "**";
 }
 else
 {
   return _row + std::to_string(_number);
 }
}

char Seat::getRow()
{
  return _row;
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
