#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,k,x;
  map<int,int> m;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
   cin>>x;
   m[x]=1;
  }
  int i=0;
  while(1)
  {
   if(!m[i])
   {
    if(k==0)
    {
     cout<<i<<"\n";
     break;
    }
    else
    k--;
   }
   i++;
  }
 }
 return 0;
}
