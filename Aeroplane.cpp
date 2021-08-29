#include "Aeroplane.h"
#include <string>

Aeroplane::Aeroplane(int rows, int seatsPerRow, std::string tailNumber)
{
  rows = rows;
  seatsPerRow = seatsPerRow;
  tailNumber = tailNumber;

  std::string seat;

  ticketClasses.insert(std::pair<std::string, *TicketClass>("Economy",TicketClass("Economy", 1.00)));
  ticketClasses.insert(std::pair<std::string, *TicketClass>("First Class",TicketClass("Economy", 1.20)));

  for (int row = 0; row < rows; row++)
  {
    for (int seatNumber = 0; seatNumber < seatsPerRow; seatNumber++)
    {
      char rowLetter = (char)(row + 65);
      seat = rowLetter + (char)seatNumber;

      if (row < FIRST_CLASS_ROWS)
      {
        seats.insert(std::pair<std::string, *Seat>(seat, Seat(rowLetter, seatNumber, ticketClasses["First Class"], false)));
      }
      else
      {
        seats.insert(std::pair<std::string, *Seat>(seat, Seat(rowLetter, seatNumber, ticketClasses["Economy"], false)));
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

std::string Aeroplane::getTailNumber()
{
  return tailNumber;
}

std::map<std::string, Seat> Aeroplane::getSeats()
{
  return seats;
}
