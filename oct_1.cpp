#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n,p,x,cake=0,hard=0;
  cin>>n>>p;
  for(int i=0;i<n;i++)
  {
   cin>>x;
   if(x >= p/2)
   cake++;
   if(x <= p/10)
   hard++;
 //  cout<<cake<<" "<<hard<<"\n";
  }
  if(cake==1 && hard==2)
  cout<<"yes\n";
  else
  cout<<"no\n";
 }
 return 0;
}

