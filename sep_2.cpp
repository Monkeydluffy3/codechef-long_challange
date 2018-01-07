#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,z=0,w=0,x=0,i;
  cin>>n;
  for(i=1;i<=n-2;i++)
  {
    if(i%2)
    cout<<i+1<<" ";
    else
    cout<<i-1<<" ";
  }
  if(n%2==0)
  {
   cout<<n<<" "<<n-1<<"\n";
  }
  else
  {
   cout<<n<<" "<<n-2<<"\n";
  }
 }
 return 0;
}
