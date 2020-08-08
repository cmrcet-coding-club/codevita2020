#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
int main()
{
  FIO;
  ull n,k,x,y,s=0; cin>>n>>k;
  priority_queue<int> p;
  for(ull i=0;i<n;i++)
  {
    cin>>x;
    p.push(x);
  }
  while(k--)
  {
    x=p.top();
    p.pop();
    x=floor(x/2);
    p.push(x);
  }
  while(!p.empty())
  {
    s+=p.top();
    p.pop();
  }
  cout<<s;
  return 0;
}
