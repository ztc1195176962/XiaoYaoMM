#include<iostream>
class Singleton{
  public:
    static Singleton* Git()
    {
        if(instance==NULL)
        {
          instance=new Singleton();
        }
        return instance;
    }
  private:
    Singleton()
    {}
    Singleton(const Singleton& s);
    static Singleton* instance=NULL;
}
