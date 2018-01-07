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
  int a=0,b=0,ans=0,a1=0,b1=99999;
  for(int i=0;i<s.size();i++)
  {
   if(s[i]=='<')
   {
   a++;
   b=0;
   }
   else if(s[i]=='>')
   {
   b++;
   a=0;
   }
   ans=max(ans,max(a,b));
  }
  cout<<ans+1<<"\n";
 }
 return 0;
}
