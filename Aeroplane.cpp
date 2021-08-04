
#include "Aeroplane.hpp"
#include <string>

Aeroplane::Aeroplane(int rows, int seatsPerRow, int tailNumber)
{
  rows = rows;
  seatsPerRow = seatsPerRow;
  tailNumber = tailNumber;

  for (int row = 0; row < rows; row++)
  {
    for (int seatNumber = 0; seatNumber < seatsPerRow; seatNumber++)
    {
      char rowLetter = (char)(row + 65);

      if (row < 5)
      {
        seats[std::to_string(rowLetter + seatNumber)] = Seat::Seat(rowLetter, seatNumber, 1, false);
      }
      else
      {
        seats[std::to_string(rowLetter + seatNumber)] = Seat::Seat(rowLetter, seatNumber, 0, false);
      }
    }
  }
}

int Aeroplane::getCapacity()
{
  return capacity;
}

int Aeroplane::getNumberOfSeatsPerRow()
{
  return numberOfSeatsPerRow;
}

int Aeroplane::getTailNumber()
{
  return tailNumber;
}
