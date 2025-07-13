#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int a,b,c,i,s;
  cin>>a;
  cin>>b;
  i=a;
  s=0;
  while(i<b){
    cout<<i;
    cout<<"+";
    i++;
  }
  for(c=a;c<=b;c++)
    s=s+c;
  cout<<b;
  cout<<"=";
  cout<<s;
}