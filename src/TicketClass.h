#ifndef TICKETCLASS_H
#define TICKETCLASS_H
#include <string>

class TicketClass
{
private:
  double BASE_COST;
  std::string _ticketType;
  double _markup;
public:
  TicketClass();
  TicketClass(std::string ticketType, float markup);
  std::string getTicketType();
  float getMarkup();
  float getPrice();
};
#endif
