#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
  FIO;
  int n,i=0; cin>>n;
  char a[3][n];
  for(int i=0;i<3;i++)
    for(int j=0;j<n;j++)
      cin>>a[i][j];
  while(i<n)
  {
    if(a[0][i]=='#'&&a[1][i]=='#'&&a[2][i]=='#')
    {
      cout<<"#", i++;
      continue;
    }
    else if(a[0][i]=='.'&&a[1][i]=='.'&&a[2][i]=='.')
    {
      i++;
      continue;
    }
   else if(a[0][i]=='.'&&a[0][i+1]=='*'&&a[0][i+2]=='.'&&a[1][i]=='*'&&a[1][i+1]=='*'&&a[1][i+2]=='*'&&a[2][i]=='*'&&a[2][i+1]=='.'&&a[2][i+2]=='*')
   {
     cout<<"A",i+=3;
     continue;
   }
   else if(a[0][i]=='*'&&a[0][i+1]=='*'&&a[0][i+2]=='*'&&a[1][i]=='*'&&a[1][i+1]=='*'&&a[1][i+2]=='*'&&a[2][i]=='*'&&a[2][i+1]=='*'&&a[2][i+2]=='*')
   {
     cout<<"E",i+=3;
     continue;
   }
   else if(a[0][i]=='*'&&a[0][i+1]=='*'&&a[0][i+2]=='*'&&a[1][i]=='.'&&a[1][i+1]=='*'&&a[1][i+2]=='.'&&a[2][i]=='*'&&a[2][i+1]=='*'&&a[2][i+2]=='*')
   {
     cout<<"I",i+=3;
     continue;
   }
   else if(a[0][i]=='*'&&a[0][i+1]=='*'&&a[0][i+2]=='*'&&a[1][i]=='*'&&a[1][i+1]=='.'&&a[1][i+2]=='*'&&a[2][i]=='*'&&a[2][i+1]=='*'&&a[2][i+2]=='*')
   {
     cout<<"O",i+=3;
     continue;
   }
   else if(a[0][i]=='*'&&a[0][i+1]=='.'&&a[0][i+2]=='*'&&a[1][i]=='*'&&a[1][i+1]=='.'&&a[1][i+2]=='*'&&a[2][i]=='*'&&a[2][i+1]=='*'&&a[2][i+2]=='*')
   {
     cout<<"U",i+=3;
     continue;
   }
   else
     i++;
  }
  return 0;
}
