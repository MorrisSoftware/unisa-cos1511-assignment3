#include "Aeroplane.h"
#include <string>

Aeroplane::Aeroplane(int rows, int seatsPerRow, int tailNumber)
{
  rows = rows;
  seatsPerRow = seatsPerRow;
  tailNumber = tailNumber;

  ticketClasses["Economy"] = TicketClass("Economy", 1.00);
  ticketClasses["First Class"] = TicketClass("First Class", 1.20);

  for (int row = 0; row < rows; row++)
  {
    for (int seatNumber = 0; seatNumber < seatsPerRow; seatNumber++)
    {
      char rowLetter = (char)(row + 65);

      if (row < FIRST_CLASS_ROWS)
      {
        seats[std::to_string(rowLetter + (char)seatNumber)] = Seat(rowLetter, seatNumber, ticketClasses["First Class"], false);
      }
      else
      {
        seats[std::to_string(rowLetter + (char)seatNumber)] = Seat(rowLetter, seatNumber, ticketClasses["Economy"], false);
      }
    }
  }
}

int Aeroplane::getRows()
{
  return rows;
}

int Aeroplane::getSeatsPerRow()
{
  return seatsPerRow;
}

int Aeroplane::getTailNumber()
{
  return tailNumber;
}

std::map<std::string, Seat> Aeroplane::getSeats()
{
  return seats;
}
