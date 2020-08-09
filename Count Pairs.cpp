//code by Nikhil Mohan
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void test()
{
    ll n,k,l;
    scanf("%lld",&n);

    set<ll> s; // to remove duplicate elements from array
    map<ll,int> m; // to keep track of frequency of each element in given array
    
    for(int i=0;i<n;i++) 
    {scanf("%lld",&l);
     s.insert(l);
     m[l]++;
    }

   //copying the set to array a  
   n=s.size();
   ll a[n],i=0,count=0;

   for(ll x : s) {a[i]=x;
                  i++; }

  
  // loop to check  (adjacent diff <=k )

  if(a[1]-a[0]<=k) count+=m[a[0]];
  for(int i=1;i<n-1;i++)
  {
    if( a[i+1]-a[i]<=k || abs(a[i]-a[i-1])<=k) count+=m[a[i]]; // when this condition satisfies we increment the count by that element frequency.
  }

  if(a[n-1]-a[n-2]<=k) count+=m[a[n-1]];
    

   cout<<count; // printing output
    
}
int main()
{ test();  
}
