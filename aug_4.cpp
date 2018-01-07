#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string a,b;
  int arr[26]={0},brr[26]={0};
  cin>>a>>b;
  char ans='B';
  int w=0,z=0;
  for(int i=0;i<a.size();i++)
  {
   arr[a[i]-'a']++;
   brr[b[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
   if(arr[i]==1)
   {
    arr[i]=0;
   }
   if(brr[i]==1)
   {
    brr[i]=0;
   }
  }
  for(int i=0;i<26;i++)
  {
   if(arr[i]>brr[i])
   z++;
   else if(arr[i]<brr[i])
   w++;
  }
  if(z>w)
  cout<<"A\n";
  else
  cout<<"B\n";
 }
 return 0;
}
