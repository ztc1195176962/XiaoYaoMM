#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n=0;
  cin>>n;

  vector<int> s1;
  s1.resize(3*n);

  int j=0;
  for(j;j<s1.size();j++)
  {
    cin>>s1[j];
  }

  int m=0;
  for(m;m<s1.size();m++)
  {
    int z=0;
    for(z;z<s1.size()-m;z++)
    {
      if(s1[z]>s1[z+1])
      {
        int temp=s1[z];
        s1[z]=s1[z+1];
        s1[z+1]=temp;
      }
    }
  }

  int s=0;
  int count=0;
  for(s=s1.size()-2;s>n-1;s-=2)
  {
    count+=s1[s];
  }

  cout<<count<<endl;
   return 0;
}
