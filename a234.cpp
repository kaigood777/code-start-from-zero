#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int a,b,c,sum,x,y;
  cin>>a;
  sum=1;
  while(a!=0){
    cin>>b;
    a=a-1;
    while(b!=0){
      c=b%10;
      b=b/10;
      sum=sum*c;
    }
  cout<<sum<<endl;
  sum=1;
  }
  
}