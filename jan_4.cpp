    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     int t;
     cin>>t;
     while(t--)
     {
      long long int n,k,z=0,w=0,ans=0,sum=0;
      cin>>k>>n;
      int m[1000000]={0};
      sum = (n*(n+1))/2;
      sum -=k;
      m[k]=2;
      if(sum%2 || n==2)
      {
       cout<<"impossible\n";
       continue;
      }
      ans = sum/2;
      int i = n;
      while(ans)
      {
        if(i!=k)
        {
          if(ans-i >=0)
          {
          ans-=i;
          m[i]=1;
          }
          if(ans==0)
          break;
          if(ans==1 && k==1)
          {
           m[i]=0;
           m[i-1]=1;
           m[2]=1;
           ans=0;
          }
          if(ans==2 && k==2)
          {
           m[i]=0;
           m[i-1]=1;
           m[3]=1;
           ans=0;
          }
        }
        i--;
        
      }
      for(int i=1;i<=n;i++)
      {
       if(m[i]==0)
       {
        z+=i;
       }
       if(m[i]==1)
       {
        w+=i;
       }
      }
      if(z!=w)
      {
       cout<<"impossible\n";
       continue;
      }
      for(int i=1;i<=n;i++)
      {
       if(m[i]==0 || m[i])
       {
        cout<<m[i];
       }
       else
       cout<<0;
      }
      cout<<"\n";
     }
     return 0;
    } 
