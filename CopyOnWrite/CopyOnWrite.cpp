#include<iostream>
#include<string.h>
class A
{
  public:
    A(char* str)
      :_str(new char[strlen(str)+1])
       ,_count(new int(1))
    {
       strcpy(_str,str);
    }
    
    A(const A & s)
      :_str(s._str)
       ,_count(s._count)
    {
      ++(*_count);
    }

    void Realse()
    {
      if(--(*_count)==0)
      {
        delete[] _str;
        delete _count;
        _str=NULL;
        _count=NULL;
      }
    }

    A& operator=(const A& s)
    {
      if(this!=&s)
      {
        Realse();
        _str=s._str;
        _count=s._count;
        *_count++;
      }
      return *this;
    }

    void CopyOnWrite()
    {
      if(*_count>1)
      {
        char *newstr=new char[strlen(_str)+1];
        strcpy(newstr,_str);
        --(*_count);

        _str=newstr;
        _count=new int(1);

      }
    }

    ~A()
    {
      Realse();
    }

  private:
    char *_str;
    int * _count;
};
