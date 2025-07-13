#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  int a,b,c;
  cin>>a;  
  int x[4];
  x[0] = 50;
  x[1] = 10;
  x[2] = 5;
  x[3] = 1;
 
  while(a!=0){
    cin>>b;
    a--; 
    c=0;
    for(int i=0;i<=3;i++){
      if(b>=x[i]){
        c=c+b/x[i];
        b=b%x[i];
      }
    }
  cout<<c<<endl;
  }
  

}