#ifndef TICKETCLASS_H
#define TICKETCLASS_H
#include <string>

class TicketClass
{
private:
  std::string ticketType;
  float markup;
public:
  TicketClass(std::string ticketType, float markup);
  std::string getTicketType();
  float getMarkup();
};
#endif
