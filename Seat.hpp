#include <string>
#include "TicketClass.hpp"

class Seat
{
private:
  const float BASE_COST = 1600.00;

  TicketClass ticketClass;
  int number;
  char row;
  float baseCost;
  bool booked;

public:
  Seat(char row, int number, TicketClass ticketClass, bool booked);
  char getRow();
  int getNumber();
  float getCost();
  bool getBooked();
  TicketClass getTicketClass();
  void setBooked();
};
