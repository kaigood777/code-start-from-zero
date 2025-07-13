#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int a,b,c,i,s,t;
  cin>>a;
  cin>>b;
  i=a;
  s=0; 
  if(a==b){
  cout<<a<<"="<<a;
}
  if(a<b){

  while(i<b){
    cout<<i;
    cout<<"+";
    i++;
  }
  for(c=a;c<=b;c++)
    s=s+c;
  cout<<b;
  cout<<"=";
  cout<<s;}
  if(a>b){
    while(i>b){
    cout<<i;
    cout<<"+";
    i--;
  }
  for(c=b;c<=a;c++)
    s=s+c;
  cout<<b;
  cout<<"=";
  cout<<s;
  }
}