#include<bits/stdc++.h>
using namespace std;
bool hello(pair<int,int> a,pair<int,int> b)
{
  if(a.first<b.first)
  return true;
  return false;
}
int main()
{
  int t;
  int a[100005];
  cin>>t;
  while(t--)
  {
   long long int n,k,x=0,w=0,l=0,z=0,ans=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    z+=a[i];
   }
   if(z%n!=0)
   {
    cout<<"-1\n";
    continue;
   }
   int p=z/n;
   w=0;
   vector<pair<int,int> > v;
   vector<pair<int,int> > :: iterator it;
   for(int i=0;i<k && i<n;i++)
   {
    z=0;
    for(int j=i;j<n;j=j+k)
    {
      z+=a[j];
      v.push_back(make_pair(a[j],j));
    }
    if(z/v.size() != p || z%v.size()!=0)
    {
     l=-1;
     break;
    }
    else
    {
     sort(v.begin(),v.end(),hello);
     for(int h=0;h<v.size() && v[h].first < p ; h++)
     {
      int pt=v[h].first;
      while(pt!=p)
      {
      it=upper_bound(v.begin(),v.end(),make_pair(p,-1));
      int yo=it-v.begin();
      if(v[yo].first==p)
      yo++;
      if(yo>=v.size())
      break;
    //  cout<<v[yo].first<<"->";
      if((v[yo].first-p) >= (p-pt))
      {
       ans+=(p-pt)*abs((v[h].second-v[yo].second)/k);
       v[yo].first-=(p-pt);
       pt=p;
      }
      else
      {
       int ror=(v[yo].first-p);
       v[yo].first=p;
       ans+=ror*abs((v[h].second-v[yo].second)/k);
     //  cout<<v[h].first<<" ";
       pt+=ror;
     //  cout<<v[h].first<<"\n"; 
      }
      }
     // cout<<ans<<"\n";
     } 
    }
    v.clear();
   } 
   if(l==-1)
   {
    cout<<"-1\n";
   }
   else
   {
    cout<<ans<<"\n";
   }
  }
  return 0;
}
