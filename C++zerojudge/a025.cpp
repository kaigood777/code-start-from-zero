#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
int a,b,c,i;
cin>>i;
  while(i!=0){
    cin>>a;
    i--;
if (a%4==0 && a%100!=0 || a%400==0)
{cout<<"a leap year"<<endl;}
else
  {cout<<"a normal year"<<endl;}
  }

  


}