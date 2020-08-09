#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
	long n;
	cin>>n;
     long a[n],b[n],s1=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
		b[i]=1;
	}

	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1] && b[i]<=b[i+1])
		{
                    b[i]=b[i+1]+1;
                    for(int j=i;j>0;j--)
                    {
                        if(a[j-1]>a[j] && b[j-1]<=b[j])
                            b[j-1] = b[j]+1;
                        else 
                            break;
                    }
                }
                else if(a[i]<a[i+1] && b[i+1]<=b[i])
                {
                    b[i+1] = b[i]+1;
                
                }
	}

        for(int i=0;i<n;i++)
        {
	    s1+=b[i];
	}
	
     cout<<s1<<endl;}
    
        return 0;

}
