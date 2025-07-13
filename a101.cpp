#include <iostream>
#include<cmath>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,high,low;
  cin>>a;
  int c[a];
  low=1000;
  high=-1;
  for(int i=0;i<a;i++){
    cin>>b;
    c[i]=b;
    if (c[i]>=60 && c[i]<low){
      low=c[i];
    }
    if (c[i]<60&&c[i]>high)
    high=c[i];
  }
sort(c,c+a);
for(int i=0;i<a;i++){
  if (i!=a-1)
    cout<<c[i]<<" ";
  else
    cout<<c[i]<<endl;
}
if (high==-1)
  cout<<"best case"<<endl;
else
  cout<<high<<endl;
if (low==1000)
  cout<<"worst case"<<endl;
else
  cout<<low<<endl;
}

