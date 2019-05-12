#include<stdio.h>
#include<string.h>
class A{
  public:
    A& A::operator=(const A& s)
    {
       if(this==&s)
         return *this;
       
       delete[]str;
       str=NULL; 

         str=new char[strlen(s.str)+1];
      strcpy(str,s.str);
       
      return *this;
    }
  private:
    char *str;
};
