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

