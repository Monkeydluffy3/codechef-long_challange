#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 string a;
    getline(cin,a);
 while(t--)
 {
   int z=0,p=0;
   getline(cin,a);
   int l=a.size();
    for(int i=0;i<l;i++)
    {
     if(a[i]==' ')
     {
      if(a[p]>=97)
      cout<<char(a[p]-32)<<". ";
      else
      cout<<a[p]<<". ";
      p=i+1;
     }
    }
    for(int j=p;j<l;j++)
    {
     if(j==p)
     {
     if(a[p]>=97)
      cout<<char(a[p]-32);
      else
      cout<<a[p];
     }
     else if(a[j]<97)
     cout<<char(a[j]+32);
     else
     cout<<a[j];
    }
    cout<<"\n";
   }
 return 0;
}
