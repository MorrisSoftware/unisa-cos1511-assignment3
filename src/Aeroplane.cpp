#include "Aeroplane.h"
#include <string>

Aeroplane::Aeroplane(){}

Aeroplane::Aeroplane(int rows, int seatsPerRow, std::string tailNumber)
{
  _rows = rows;
  _seatsPerRow = seatsPerRow;
  _tailNumber = tailNumber;

  std::string seat;

  ticketClasses.insert(std::make_pair("Economy", TicketClass("Economy", 1.00)));
  ticketClasses.insert(std::make_pair("First Class", TicketClass("Economy", 1.20)));

  for (int row = 0; row < _rows; row++)
  {
    for (int seatNumber = 0; seatNumber < _seatsPerRow; seatNumber++)
    {
      char rowLetter = (char)(row + 65);
      seat = rowLetter + (char)seatNumber;

      if (row < FIRST_CLASS_ROWS)
      {
        seats.insert(std::make_pair(seat, Seat(rowLetter, seatNumber, ticketClasses["First Class"], false)));
      }
      else
      {
        seats.insert(std::make_pair(seat, Seat(rowLetter, seatNumber, ticketClasses["Economy"], false)));
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

std::string Aeroplane::getTailNumber()
{
  return _tailNumber;
}

std::map<std::string, Seat> Aeroplane::getSeats()
{
  return seats;
}
