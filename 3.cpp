#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int a,i,n;
  cin>>a;
  i=1;
  while(pow(i,3)<a){
    i++;
  }
  i--;
  n=pow(i,3);
  
  cout<<i<<"/n";
  cout<<n<<endl;
}