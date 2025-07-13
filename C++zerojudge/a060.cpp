#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
  int i,a,b;
  cin>>a;
  b=0;
  for(i=1;i<a;i++){
    if(a%i==0){
      b=b+i;
    }
  }
if(b==a){
  cout<<"perfect number";
}
else
  cout<<"not perfect number";

  
}