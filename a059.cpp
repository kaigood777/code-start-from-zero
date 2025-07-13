#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
int a,b,c,i,x,y;
  cin>>a;
  for(i=1;i<=a;i++)
  {c=pow(10,i);
    if (a % c==a)
    {b=i;
     break;
      
    }
    
  }
  x=0;
while(a!=0){
    x=x+pow(a%10,b);
    a=a/10;
  }


if(x==a)
  cout<<"yes";
else
  cout<<"no";
  
}
