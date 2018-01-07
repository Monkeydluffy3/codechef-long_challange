#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > > v;
set<int> vist;
bool gun(pair<int,pair<int,int> > p,pair<int,pair<int,int> > q)
{
  if(p.second.second < q.second.second)
  {
    return true;
  }
  return false;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   long long int n,d,z=0,ans=0,di,si,ti,k=0;
   cin>>n>>d;
   for(int i=1;i<=d;i++)
   vist.insert(i);
   for(int i=0;i<n;i++)
   {
    cin>>di>>ti>>si;
    v.push_back(make_pair(di,make_pair(ti,si)));
   }
   sort(v.begin(),v.end(),gun);
   
   for(int i=v.size()-1;i>=0;i--)
   {
    set<int>::iterator it,it1;
    it=vist.lower_bound(v[i].first);
    //cout<<*it<<" ";
    while(it!=vist.end())
    {
     z++;
     k=*it;
     vist.erase(it);
     if(z==v[i].second.first)
     break;
     it=vist.lower_bound(k);
    }
    //cout<<"\n";
    ans+=((v[i].second.first-z)*v[i].second.second);
    z=0;
   }
   cout<<ans<<"\n";
   v.clear();
   vist.clear();
 }
 return 0;
}
