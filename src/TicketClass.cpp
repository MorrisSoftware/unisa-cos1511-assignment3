#include "TicketClass.h"

TicketClass::TicketClass(){}

TicketClass::TicketClass(std::string ticketType, float markup)
{
  BASE_COST = 1600.00;
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

float TicketClass::getPrice()
{
  return _markup * BASE_COST;
}
