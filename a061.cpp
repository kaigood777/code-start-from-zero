#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
  int a,sum,i,x,y,min;
  cin>>a;
  cin>>x;
  sum=0,y=a*x;
  for(i=1;i<=a;i++){
    if(a%i==0&&x%i==0){
      sum=i;
    }
  }
  min=y/sum;
  cout<<sum;
  cout<<min;
}
