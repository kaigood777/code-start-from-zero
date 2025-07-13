#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int a,b,c,f,e,min,max;
  cin>>a;  
  int x[a][2];
  cin>>f;
  e=a-1;
  x[a][1]=x[0][1];
  x[a][2]=x[0][2];
  while(a!=0){
    cin>>b;
    cin>>c;
    a--;
    if(b<f){
      x[a-1][1]=b;
      x[a-1][2]=c;
    }
	 
  }
for(int i=1;i<=e;i++){
  if(x[i][1]<x[a][1]){
    x[a][1]=x[i][1];
  }
  if(x[i][2]>x[a][2]){
    x[a][2]=x[i][2];
  }
}
  max=x[a][2]-x[a][1];
  cout<<max;
}