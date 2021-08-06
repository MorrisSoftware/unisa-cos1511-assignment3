
#ifndef AEROPLANE_H
#define AEROPLANE_H
#include <string>
#include <map>
#include "Seat.h"
#include "TicketClass.h"

class Aeroplane
{
private:
  static const int FIRST_CLASS_ROWS = 4;

  int rows;
  int seatsPerRow;
  int tailNumber;
  std::map<std::string, TicketClass> ticketClasses;
  std::map<std::string, Seat> seats;

public:
  Aeroplane(int rows, int seatsPerRow, int tailNumber);
  int getRows();
  int getSeatsPerRow();
  int getTailNumber();
  std::map<std::string, Seat> getSeats();
};
#endif
