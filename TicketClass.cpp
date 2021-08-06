#include "TicketClass.h"

TicketClass::TicketClass(std::string ticketType, float markup)
{
  ticketType = ticketType;
  markup = markup;
}

std::string TicketClass::getTicketType()
{
  return ticketType;
}

float TicketClass::getMarkup()
{
  return markup;
}

