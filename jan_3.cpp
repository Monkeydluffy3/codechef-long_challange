#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 
 while(t--)
 {
 long long int arr[100005];
  long long int n,z=0,max_sum1=-99999999999999,max_sum2=-99999999999999,k;
  cin>>n>>k;
  z=0;
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
   z+=arr[i];
   if(z>max_sum1)
   {
     max_sum1=z;
   }
   if(z<0)
   z=0;
  }
   long long int max_sum10=-9999999;
 z=0;
  for(int i=0;i<(k*n);i++)
  {
   z+=arr[i%n];
   if(z>max_sum10)
   {
     max_sum10=z;
   }
   if(z<0)
   z=0;
  }
  cout<<max_sum10<<"\n";
  z=0;
  if(k==1)
  {
   cout<<max_sum1<<"\n";
   continue;
  }
  for(int i=0;i<2*n;i++)
  {
    z+=arr[i%n];
    if(z>max_sum2)
    {
     max_sum2=z;
    }
    if(z<0)
    z=0;
  }
  long long int max_sum3=-99999999999999;
    z=0;
    for(int i=0;i<3*n;i++)
    {
       z+=arr[i%n];
       if(z>max_sum3)
       {
        max_sum3=z;
       }
       if(z<0)
       z=0;
    }
  if(max_sum1==max_sum2 && max_sum2 == max_sum3)
  {
   cout<<max_sum1<<"\n";
  }
  else if((max_sum2==max_sum3))
  {
    cout<<max_sum3<<"\n";
  }
  else
  {
     cout<<((k-2)*(max_sum2-max_sum1) + max_sum2)<<"\n";
  }
 }
 
}
