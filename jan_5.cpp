#include<bits/stdc++.h>
using namespace std;
int dp[5005][5005];
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    string s1,s2;
    cin>>s1>>s2;
    vector<char> v1,v2;
    v1.push_back(s1[0]);
    for(int i=1;i<a;i++)
    {
      if(v1[v1.size()-1]!=s1[i])
      v1.push_back(s1[i]);
    }
    v2.push_back(s2[0]);
    for(int i=1;i<b;i++)
    {
      if(v2[v2.size()-1]!=s2[i])
      v2.push_back(s2[i]);
    }
    for(int i=1;i<=v1.size();i++)
    {
      for(int j=1;j<=v2.size();j++)
      {
        if(v1[i-1]==v2[j-1])
        {
         dp[i][j] = dp[i-1][j-1]+1;
        }
        else
        {
         dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
      }
    }
    int z = dp[v1.size()][v2.size()];
   // cout<<z<<"\n";
    int w=z;
    z = z + (v1.size() - w);
    z = z + (v2.size() - w);
    
    cout<<z<<"\n"; 
    memset(&dp[0][0],0,sizeof(dp[0][0])*(5005*5005));
    
  }
  return 0;
}
