#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  string str = "babbaa";
  cin>>t;
  while(t--)
  {
    int n,a;
    cin>>n>>a;
    if(a==1)
    {
     cout<<n<<" ";
     for(int i=0;i<n;i++)
     cout<<"a";
    }
    else if(a==2)
    {
     if(n>4)
     {
      if(n==5)
      cout<<3<<" aaaba";
      else if(n==6)
      cout<<3<<" aaabab";
      else if(n==7)
      cout<<3<<" aaababb";
      else if(n==8)
      cout<<3<<" aaababbb";
      else if(n==9)
      cout<<4<<" aaaababbb";
      else if(n==10)
      cout<<4<<" aaaababbbb";
      else
      {
       cout<<4<<" aaaa";
       for(int i=0;i<n-4;i++)
       cout<<str[i%6];
      }
     }
     
     if(n==4)
     {
      cout<<2<<" aabb";
     }
     if(n==3)
     {
      cout<<2<<" abb";
     }
     if(n==2)
     {
      cout<<1<<" ab";
     }
     if(n==1)
     {
      cout<<1<<" a";
     }
    }
    else
    {
     cout<<1<<" ";
     for(int i=0;i<n;i++)
     {
      cout<<char('a'+(i%a));
     }
    }
   cout<<"\n"; 
  }

}
