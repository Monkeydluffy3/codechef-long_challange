#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  long long int arr[705][705];
  long long int n,z=0,w=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
     cin>>arr[i][j];
    }
    sort(arr[i],arr[i]+n);
  }
  z = w = arr[n-1][n-1];
  for(int i=n-2;i>=0;i--)
  {
    for(int j=n-1;j>=0;j--)
    {
     if(arr[i][j] < w)
     {
       z+=arr[i][j];
       w=arr[i][j];
       break;
     }
     if(j==0)
     {
      z=-1;
      break;
     }
    }
   if(z==-1)
   break;
  }
  cout<<z<<"\n";
 }
 
}
