#include "TicketClass.h"

TicketClass::TicketClass(){}

TicketClass::TicketClass(std::string ticketType, float markup)
{
  _ticketType = ticketType;
  _markup = markup;
}

std::string TicketClass::getTicketType()
{
  return _ticketType;
}

float TicketClass::getMarkup()
{
  return _markup;
}

