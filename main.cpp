#include <iostream>
#include "Aeroplane.h"
#include "Flight.h"
#include "Passenger.h"
#include "Seat.h"
#include "TicketClass.h"

using namespace std;

int main()
{
  const std::string WELCOME_MESSAGE = "Welcome to COS1511 Flight Booking System";

  cout << WELCOME_MESSAGE;
  cout << endl;
  
 Aeroplane plane = Aeroplane(9, 6, "COS1511");
  
  return 0;
}
