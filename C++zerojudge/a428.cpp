#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a;
  b=0;
  for(int i=1;i<a;i++){
    if(a%i==0)
      b=b+i;
  }
  if(b>a){
    cout<<"Abundant";
  }
  else if(b<a){
    cout<<"Deficient";
  }
  else
    cout<<"Perfect";



}