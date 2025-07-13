#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main() {
int a,b,c,i,x,y,z,d,ne,sum,f,t;
cin>>x;
d=pow(10,z);
z=1;
  while(x!=0){
    cin>>a;
    x--;
    while(y==a){
      y=a%d;
      z=z+1;
    
    }
    f=z+1;
    z=1;
    sum=pow(10,f);
    while(y!=a){
      
      y=a%10;
      a=a/10;
      ne=ne+y*sum;
    }
	  b=0;
    t=0;
	for(i=1;i<=a;i++)
	{if (a%i==0)
	{b=b+1;}
	}
	
	
  }
  for(i=1;i<=a;i++)
	{if (ne%i==0)
	{t=t+1;}
	}
	if(b==2 && t==2 && ne!=a)
	cout<<"emirp"<<endl;
	if(b==2 && t!=2 ||ne==a && b==2 )
	cout<<"prime"<<endl;
  if(b!=2)
  cout<<"normal"<<endl;
  
}