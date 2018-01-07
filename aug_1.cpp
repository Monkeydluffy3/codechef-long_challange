#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,a[105],z=0,w=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  } 
  w=1;
  for(int i=0;i<(n+1)/2;i++)
  {
   if(a[i]==w)
   w++;
   if(a[i]==a[n-1-i])
   {
   if(i>0)
   {
    if((a[i]-a[i-1])>1)
    {
    z=0;
   // cout<<i<<"*";
    break;
    }
   }
   z=1;
   }
   else
   {
   z=0;
   break;
   }
  }
  if(z && w==8)
  {
   cout<<"yes\n";
  }
  else
  cout<<"no\n";
 }
 return 0;
}
