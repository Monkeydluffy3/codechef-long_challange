#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  long long int n,b,ans1,ans2,z=0,l,k,ans;
  cin>>n>>b;
  if(b>n/2)
  {
   z=n-b;
   if(z>0)
   cout<<z<<"\n";
   else
   cout<<0<<"\n";
  }
  else
  {
  z=n/2;
  l=n-z;
  k=l%b;    
  for(int i=z-k;i<=z+(b-k);i++)
  {
   ans=max(ans,((n-i)/b)*i);
  }
  cout<<ans<<"\n";
  ans=0;
  }
 } 
 return 0;
}
