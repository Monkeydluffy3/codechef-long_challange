#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 int a[100005];
 long long int sum[100005]={0};
 while(t--)
 {
  long long int n,z=0,w=0,x=999999999999999999,in;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum[i]=z+a[i];
    z+=a[i];
  }
  for(int i=n-1;i>=0;i--)
  {
    if(x>=(sum[i]+w+a[i]))
    {
     in=i;
     x=sum[i]+w+a[i];
    }
    w+=a[i];
  //  cout<<w<<" ";
  }
  cout<<in+1<<"\n";
  memset(&sum[0],0,sizeof(sum[0])*100005);
 }
 return 0;
}
