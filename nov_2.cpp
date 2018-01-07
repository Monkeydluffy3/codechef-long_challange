#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 cin.tie(0);cout.tie(0);
 while(t--)
 {
  long long int n,rat,r=0,x=0,flag=0;
  long long int upper=9999999999999,lower=0;
  cin>>n>>rat;
//  cout<<lower<<" "<<upper<<"\n";
  for(int i=0;i<n;i++)
  {
   cin>>x;
   if(x>=lower && x<=upper)
   {
    r=0;
   }
   else
   {
    flag=1;
   }
   
   if(x >= rat)
   {
     upper = x;
   }
   else
   {
     lower = x;
   }
//   cout<<lower<<" "<<upper<<"\n";
  }
  
  
  if(flag)
  cout<<"NO\n";
  else
  cout<<"YES\n";
 }

 return 0;
}
