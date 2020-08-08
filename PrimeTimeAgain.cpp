#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
int isp(ull n)
{
  int f=1;
  for(ull i=2;i<=n/2;i++)
	if(n%i==0)
	{
		f=0;
		break;
	}
	return f;
}
int main()
{
  FIO;
  ull h,s,p,f=0,c=0,d;	cin>>h>>p;
  d=h/p;
  for(ull i=2;i<=d;i++)
  {
	f=0;
    s=i;
	if(isp(i))
	{
		for(ull j=0;j<p-1;j++)
		{
			s=s+d;
			if(!isp(s))
				f=1;
		}
			if(f==0)
			c++;
	}
  }
	cout<<c;
  return 0;
}
