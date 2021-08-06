
#ifndef SEAT_H
#define SEAT_H
#include "TicketClass.h"

class Seat
{
private:
  float BASE_COST;
  int number;
  char row;
  bool booked;
  TicketClass ticketClass;

public:
  Seat(char row, int number, TicketClass ticketClass, bool booked);
  char getRow();
  int getNumber();
  float getCost();
  bool getBooked();
  TicketClass getTicketClass();
  void setBooked(bool booked);
};
#endif
