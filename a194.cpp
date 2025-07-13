#include <iostream>
#include<cmath>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,max,min,d[a];
  cin>>a;
  int c[a];
  for(int i=0;i<a;i++){
    cin>>b;
    c[i]=b;
  
  }
  sort(c,c+a);
  max=c[a-1];
  min=c[0];
  cout<<max<<endl;
  cout<<min<<endl;
}
//if (c[i]>c[i-1])
  //    max=c[i];
  //if (c[i]<c[i-1])
   //  min=c[i];
      