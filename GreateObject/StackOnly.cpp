#include<iostream>
class StackOnly
{
  public:
    static StackOnly Greate()
    {
      return StackOnly();
    }
  private:
  StackOnly()
  {}
};
