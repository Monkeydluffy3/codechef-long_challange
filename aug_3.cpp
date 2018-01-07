#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v(1002);
int main()
{
 int t;
 string a[1002];
 int min_sal[1002];
 int vist[1002]={0};
 cin>>t;
 while(t--)
 {
  long long int n,m,z=0,w=0,k=0;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  cin>>min_sal[i];
  for(int i=0;i<m;i++)
  {
   cin>>v[i].first>>v[i].second;
  }
  for(int i=0;i<n;i++)
  cin>>a[i];
  
  for(int i=0;i<n;i++)
  {
   int as=min_sal[i],index=-1;
   for(int j=0;j<m;j++)
   {
    if(a[i][j]=='1')
    {
     if(v[j].first > as && v[j].second>0)
     {
      as=v[j].first;
      index=j;
     }
    }
   }
   if(index==-1)
   {
    z++;
   }
   else
   {
    w+=v[index].first;
    v[index].second--;
    if(vist[index]==0)
    {
     k++;
     vist[index]=1;
    }
   }
  }
  cout<<n-z<<" "<<w<<" "<<m-k<<"\n";
  memset(&vist[0],0,sizeof(vist[0])*1002);
 }
 return 0;
}
