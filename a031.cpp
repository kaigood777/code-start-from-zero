#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a;
  if(a<=5){
  cout<<0;
  }
  if(a>=6 && a<=11){
  cout<<590;
  } 
  if(a>=12 && a<=17){
  cout<<790;
  }
  if(a>=18 && a<=59){
  cout<<890;
  }
  if(a>=60){
  cout<<399;
  }
  return 0;
}