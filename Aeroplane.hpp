#include <string>
#include <map>
#include "Seat.hpp"

class Aeroplane
{
private:
  int rows;
  int seatsPerRow;
  int tailNumber;
  std::map<std::string, Seat> seats;

public:
Aeroplane::Aeroplane(int rows, int seatsPerRow, int tailNumber);
  int getRows();
  int getSeatsPerRow();
  int getTailNumber();
};
