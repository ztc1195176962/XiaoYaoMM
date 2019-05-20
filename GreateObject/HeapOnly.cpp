#include<iostream>
class HeapOnly
{
  public:
  static HeapOnly* Great()
  {
    return new HeapOnly;
  }
private:
  HeapOnly()
  {}
  HeapOnly(const HeapOnly& s)
  {}
};
