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
  long long int a[100005];
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
   for(int i=0;i<k && i<n;i++)
   {
    int j;
    for(j=i;j+k<n;j=j+k)
    {
       ans+=abs(p-a[j]);
       a[j+k]=a[j+k]+(a[j]-p);
    }
    if(a[j]!=p)
    {
     l=-1;
     break;
    }
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
