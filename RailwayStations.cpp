//Code by Nikhil Mohan

/*
Algorithm:
Sort the arrival and departure time of trains.
Create two pointers i=0, and j=0 and a variable to store ans and current count plat
Run a loop while i<n and j<n and compare the ith element of arrival array and jth element of departure array.
if the arrival time is less than or equal to departure then one more platform is needed so increase the count, i.e. plat++ and increment i
Else if the arrival time greater than departure then one less platform is needed so decrease the count, i.e. plat++ and increment j
Update the ans, i.e ans = max(ans, plat).

Implementation: This doesn’t create a single sorted list of all events, rather it individually sorts arr[] and dep[] arrays, and then uses merge process of merge sort to process them together as a single sorted array.
*/

// Program to find minimum number of platforms 
// required on a railway station

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Returns minimum number of platforms reqquired
int solve(ll a[],ll b[],int n) 
{   // Sort arrival and departure arrays 
    sort(a,a+n); 
    sort(b,b+n); 
    
    // p indicates number of platforms needed at a time 
    int p=1,result=1; 
    
    // Similar to merge in merge sort to process 
    // all events in sorted order 
    for(int i=1,j=0; i<n && j<n;) 
    { 
        // If next event in sorted order is arrival, increment count of platforms needed 
        if (a[i]<=b[j])
        {p++; 
         i++;} 
       // Else decrement count of platforms needed 
        else if (a[i]>b[j])
        { p--; 
          j++;}  
        
        // Update result 
        result=max(result,p);
    } 
    //returning the result to main function
    return result; 
} 

void test()
{
    ll n;
    scanf("%lld",&n);
    
    ll a[n]; // arival array
    ll b[n]; // departure array
    ll s,t;
    
    //scanning the input given
    for(int i=0;i<n;i++) 
    {scanf("%lld%lld",&s,&t);
     a[i]=s;
     b[i]=s+t; // calculated departure time 
    }
    
    //printing output,solve return the minimum stations required
    cout<<solve(a,b,n);
    
}

//driver code
int main()
{ test();  
}
