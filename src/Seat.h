
#ifndef SEAT_H
#define SEAT_H
#include "TicketClass.h"

class Seat
{
private:
  float BASE_COST;
  int _number;
  char _row;
  bool _booked;
  TicketClass _ticketClass;

public:
  Seat();
  Seat(char row, int number, TicketClass ticketClass, bool booked);
  char getRow();
  int getNumber();
  std::string getSeatNumber();
  float getCost();
  bool getBooked();
  TicketClass getTicketClass();
  void setBooked(bool booked);
};
#endif
