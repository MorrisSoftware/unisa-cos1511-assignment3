
#ifndef AEROPLANE_H
#define AEROPLANE_H
#include <string>
#include <map>
#include "Seat.h"
#include "TicketClass.h"

class Aeroplane
{
  private:
    int FIRST_CLASS_ROWS;
    int _rows;
    int _seatsPerRow;
    std::string _tailNumber;
    std::map<std::string, TicketClass> _ticketClasses;
    std::map<std::string, Seat> _seats;

  public:
    Aeroplane();
    Aeroplane(int rows, int seatsPerRow, std::string tailNumber);
    int getRows();
    int getSeatsPerRow();
    int getNumberOfFirstClassRows();
    std::string getTailNumber();
    std::map<std::string, Seat> getSeats();
    std::map<std::string, TicketClass> getTicketClasses();
};
#endif
