#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
  cin>>n;
  if(n<pow(2,12)
  {
  long long int a[100005];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  long long int t;
  cin>>t;
  while(t--)
  {
    long long int x,y;
    cin>>x>>y;
    long long int z=0;
    for(int i=0;i<n;i++)
    {
     if((i & x) == i)
     {
     // cout<<i<<" "<<x<<"\n";
      a[i]-=y;
     }
     if(a[i]>0)
     z++;
    }
    cout<<z<<"\n";
  }
  
  }
  else
  {
    
  
  }
  
  return 0;
}
