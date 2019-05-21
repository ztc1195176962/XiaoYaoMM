#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s1;
  string s2;
  
  while(cin>>s2)
  {
    if(s1.size()==0)
    {
      s1=s2;
    }
    else{
      s1=s2+" "+s1;
    }
  }
  
cout<<s1<<endl;

return 0;
}
