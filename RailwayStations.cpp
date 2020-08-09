//Code by Nikhil Mohan
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(ll a[],ll b[],int n) 
{ 
    sort(a,a+n); 
    sort(b,b+n); 

    int p=1,r=1; 
    for(int i=1,j=0; i<n && j<n;) { 

        if (a[i]<=b[j])
        {p++; 
         i++;} 
 
        else if (a[i]>b[j])
        { p--; 
          j++;}  
        r=max(r,p);
    } 
    return r; 
} 

void test()
{
    ll n;
    scanf("%lld",&n);
    
    ll a[n],b[n],s,t;
    
    
    for(int i=0;i<n;i++) 
    {scanf("%lld%lld",&s,&t);
     a[i]=s;
     b[i]=s+t;
    }
    
    cout<<solve(a,b,n);
    
}
int main()
{ test();  
}
