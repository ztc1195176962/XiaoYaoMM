#include<iostream>
using namespace std;
#include<string.h>
#include<unistd.h>
#include<stdio.h>

int main()
{
 std::string s1("They are students.");
 std::string s2("aeiou");
              
 std::string::iterator it1=s1.begin();
 std::string::iterator it2=s2.begin();
                      
 for(it2;it2!=s2.end()&&*it2!='\0';it2++)
{
  for(it1;it1!=s1.end()&&*it1!='\0';it1++)
    {
       if(*it1==*it2)
        s1.erase(it1);
    }
}       
  printf("%s",s1);                  }
    return 0;

}
