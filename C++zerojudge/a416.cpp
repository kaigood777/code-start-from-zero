#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,c;
  char b;
  cin>>a;
  cin>>b;
  cin>>c;
  if(b=='+'){
  cout<<a+c;
  }
  if(b=='-'){
  cout<<a-c;
  } 
  if(b=='*'){
  cout<<a*c;
  }
  return 0;
}