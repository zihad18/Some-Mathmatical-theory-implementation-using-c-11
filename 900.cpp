#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n,ll a,ll b)
{
   ll l= max(a,b);
   ll s= min(a,b);
   ll m=1;
   for(ll i=n;i>l;i--)
   {
       m*=i;
       if(s!=0&&m%s==0)
       {
           m/=s;
           s--;
       }
   }
   if(s!=0)
   {
       while(s)
       {
           m/=s;
           s--;
       }
   }
   return m;
}


int main()
{

    ll i,t,n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        ll mu=n/2;
        ll s=0;
        for(i=1;i<=mu;i++)
        {
            s+=fact((n-i),i,n-(2*i));
        }
        s+=1;
        cout<<s<<endl;
    }



    return 0;
}
