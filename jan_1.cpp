#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int a[10005]={0};
  int x,z=0;
  for(int i=0;i<4;i++)
  {
   cin>>x;
   a[x]++;
   if(a[x]==2)
   {
   z++;
   a[x]=0;
   }
  }
  if(z==2)
  cout<<"YES";
  else
  cout<<"NO";
  cout<<"\n";
 }
 
}
