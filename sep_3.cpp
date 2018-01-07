#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  int hash[26]={0};
  cin>>s;
  for(long long int i=0;i<s.size();i++)
  {
    hash[s[i]-'0']++;
  }
  for(int i=65;i<=90;i++)
  {
   int k=i%10;int z=i/10;
   if(k==z)
   {
    if(hash[k]>1)
    cout<<char(i);
   }
   else
   {
    if(hash[k] && hash[z])
    cout<<char(i);
   }
  }
  cout<<"\n";
 }
 return 0;
}
