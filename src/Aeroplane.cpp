#include "Aeroplane.h"
#include <string>
#include <iostream>

Aeroplane::Aeroplane(){}

Aeroplane::Aeroplane(int rows, int seatsPerRow, std::string tailNumber)
{
  _rows = rows;
  _seatsPerRow = seatsPerRow;
  _tailNumber = tailNumber;
  FIRST_CLASS_ROWS = 4;

  std::string seat;

  _ticketClasses.insert(std::make_pair("Economy", TicketClass("Economy", 1.00)));
  _ticketClasses.insert(std::make_pair("First Class", TicketClass("Economy", 1.20)));

  for (int row = 0; row < _rows; row++)
  {
    for (int seatNumber = 1; seatNumber < _seatsPerRow+1; seatNumber++)
    {
      char rowLetter = (char)(row + 65);
      seat = rowLetter + std::to_string(seatNumber);

      if (row < FIRST_CLASS_ROWS)
      {
        _seats.insert(std::make_pair(seat, Seat(rowLetter, seatNumber, _ticketClasses["First Class"], false)));
      }
      else
      {
        _seats.insert(std::make_pair(seat, Seat(rowLetter, seatNumber, _ticketClasses["Economy"], false)));
      }
    }
  }
}

int Aeroplane::getRows()
{
  return _rows;
}

int Aeroplane::getSeatsPerRow()
{
  return _seatsPerRow;
}

int Aeroplane::getNumberOfFirstClassRows()
{
  return FIRST_CLASS_ROWS;
}

std::string Aeroplane::getTailNumber()
{
  return _tailNumber;
}

std::map<std::string, Seat> Aeroplane::getSeats()
{
  return _seats;
}

std::map<std::string, TicketClass> Aeroplane::getTicketClasses()
{
  return _ticketClasses;
}
