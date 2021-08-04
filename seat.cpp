#include <string>

class seat
{
private:

  string number;
  float cost;

public:

  seat(string number, float cost)
  {
    this.number = number;
    this.cost = cost;
  }

  void setNumber(string number)
  {
    this.number = number
  }

  void setCost(float cost)
  {
    this.cost = cost
  }

  string getNumber()
  {
    return this.number;
  }

  float getCost()
  {
    return this.cost;
  }

};

