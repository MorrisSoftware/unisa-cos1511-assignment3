#ifndef TICKETCLASS_H
#define TICKETCLASS_H
#include <string>

class TicketClass
{
private:
  std::string _ticketType;
  float _markup;
public:
  TicketClass();
  TicketClass(std::string ticketType, float markup);
  std::string getTicketType();
  float getMarkup();
};
#endif
