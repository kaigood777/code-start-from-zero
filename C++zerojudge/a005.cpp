#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a,b;
while(a>=12){
b--;
c++;
a=a-12;
  while(a<12){
  if(c>0){
    c--;
    a++;}
  if(b>a/b){
    b--;
    a++;}
  }

}

}