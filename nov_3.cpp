#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   int n,p;
   cin>>n>>p;
   if(p==1 || n%p)
   {
    cout<<"impossible\n";
    continue;
   }
   else if(p==2 || n==2)
   {
    cout<<"impossible\n";
    continue;
   }
   else
   {
    int times = n/p;
    if(p%2)
    {
     for(int j=0;j<times;j++)
     {
      for(int i=0;i<p;i++)
      {
      if(i==0 || i==p-1)
      cout<<"b";
      else
      cout<<"a";
      }
     }
    }
    else
    {
     for(int j=0;j<times;j++)
     {
      for(int i=0;i<p;i++)
      {
      if(i==0 || i==p-1)
      cout<<"b";
      else
      cout<<"a";
      }
     }
    }
    cout<<"\n";
   }
  }
  return 0;
}
