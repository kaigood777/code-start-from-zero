#include <bits/stdc++.h>
using namespace std;
int main()
{ 
 int w,h;
 cin>>w>>h;
 double b,t,s;
 t=h/100;
 s=t*t;
 b=w/s;
 cout<<b;
 if(b<18.5){
  cout<<"Lightweight";
 }
 else if(b>=18.5 && b<24)
 cout<<"perfect";
 else if(b>=24 && b<27)
 cout<<"Moderately obese";
 else if(b>=27)
 cout<<"fatty";
}