#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   long long int n,x=0,z,p,w=0;
   cin>>n;
   z=4294967294;
   p=z;
   for(int i=0;i<99989;i++)
   {
     if(z-100000 > 0)
     {
     cout<<100000<<" ";
     w+=100000;
     x+=100000;
     z-=100000;
     }
     else
     {
     cout<<1<<" ";
     w+=1;
     x+=1;
     z-=1;
     }
   }
   int f=p-x;
   int r=n-99990;
   cout<<f-r<<" ";
   w+=(f-r);
   for(int i=0;i<r;i++)
   {
    cout<<1<<" ";
    w+=1;
   }  
   cout<<"\n";
 }
 return 0;
}
