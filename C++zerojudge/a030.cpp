#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
int a,b,c,i;
cin>>i;
b=0;
  while(i!=0){
    cin>>a;
    i--;
    if(a>b)
      b=a;
  }
  cout<<b;

  
}