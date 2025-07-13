#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int a,b,c,i;
cin>>a;
int x[13];
i=0;
while(a!=0){
  cin>>b;
  a--;
  while(b!=0){
    x[i]=b%10;
    b/=10;
    i++;
  }
  x[12]=10-(x[0]+3*x[1]+x[2]+3*x[3]+x[4]+3*x[5]+x[6]+3*x[7]+x[8]+3*x[9]+x[10]+3*x[11])%10;
  cout<<x[12];
  }
  
}







