#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string str;
  int pos_a,pos_b,flag_a=0,flag_b=0,a_count=0,b_count=0;
  cin>>str;
  for(int i=0;i<str.size();i++)
  {
    if(str[i] == 'A' && flag_a == 0)
    {
     flag_a=1;
     a_count+=1;
     pos_a=i;
     flag_b=0;
    }
    if(str[i] == 'B' && flag_b == 0)
    {
     flag_b=1;
     b_count+=1;
     pos_b=i;
     flag_a=0;
    }
    if(str[i] == 'A' && flag_a == 1)
    {
     a_count +=(i - pos_a);
     pos_a = i;
    }
    if(str[i] == 'B' && flag_b == 1)
    {
     b_count +=(i - pos_b);
     pos_b = i;
    }
    if(str[i] == 'A' && flag_b ==1 )
    {
     pos_a =i;
     flag_b=0;
     a_count+=1;
    }
    if(str[i] == 'B' && flag_a ==1 )
    {
     pos_b =i;
     flag_a=0;
     b_count+=1;
    }
    
  }
  cout<<a_count<<" "<<b_count<<"\n";
 }

 return 0;
}
