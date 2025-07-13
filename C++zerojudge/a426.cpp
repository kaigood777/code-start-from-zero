#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a;
  b=13;
  for(int i=1;i<a;i++){
    b=b*13;
    b%100;
  }
c=b/10;
d=c%10;
cout<<d;
return 0;
}