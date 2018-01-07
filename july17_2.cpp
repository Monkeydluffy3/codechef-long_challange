#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int a=0,b=0,ans=0;
  for(int i=0;i<s.size();i++)
  {
   if(s[i]=='<')
   {
   a++;
   if(a-b==0)
   {
    b=0;
   }
   }
   else if(s[i]=='>')
   {
   b++;
   if(b-a==0)
   {
    a=0;
   }
   }
  // cout<<a<<" "<<b<<"\n";
   ans=max(ans,abs(a-b));
  }
  cout<<ans+1<<"\n";
 }
 return 0;
}
