//Code by Ambati Gayatri
#include <bits/stdc++.h>
using namespace std;
int seive[600]; 
void SieveOfEratosthenes() 
{ 
   int n=600;
     memset(seive,-1,sizeof(seive)); 
  seive[1]=0;
  
    for(int p=2;p*p<=n;p++) 
    { 
        if(seive[p]==-1) 
        { 
            for(int i=p*p;i<=n;i+=p) 
               seive[i]=0; 
        } 
    } 
} 
  
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
long int n,k;
cin>>n>>k;
SieveOfEratosthenes();
long int i=0,j,l,m,o,p=n/k;

int a[100];
long int n1=n,k1=k,ans=0,flag=0;
n1=1;
while(n1<n)
{
a[i]=n1;
n1+=(p);

i++;
//cout<<a[i-1]<<n1<<"\n";
}
m=i;

for(i=0;i<p;i++)
{
	flag=0;
	for(j=0;j<m;j++)
	{
	   //cout<<a[j]<<" "<<seive[a[j]]<<"\n";
		if(seive[a[j]]!=-1)
		{
			
			flag=1;
			
		}
		a[j]++;
		
	}
	if(flag==0)
	ans++;
}
cout<<ans;
}
