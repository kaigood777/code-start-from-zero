#include <bits/stdc++.h>
using namespace std;
int main(void)
{
int a,d,low,high,i,x;
cin>>a;
int b[a-1];
b[a-1]={0};
cin>>x;

for(i=1;i<x+1;i++){
  cin>>d;
  for(int j=1;j<a+1;j++){
  if (j%d==0)
    b[j-1]=b[j-1]+1;
}
}
d=0;
for(i=0;i<a;i++){
  if (b[i]%2==1)
    d++;
}
  cout<<d<<endl;
}
