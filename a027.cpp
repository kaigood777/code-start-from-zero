#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
int a,b,c,i;
  while(cin>>a){
 
if(a==0){
	break;
}
if (a%4==0 && a%100!=0 || a%400==0)
{cout<<"a leap year"<<endl;}
else
  {cout<<"a normal year"<<endl;}
  }

  


}