# Lab-4b
//question 12
#include<iostream>
using namespace std;
int i=1,h=0;
int hcf(int a,int b)
{
  if(a%i==0 && b%i==0)
   h=i;
  if(i<=a)
  {
    i++;
    hcf(a,b);
  }
  return h;
}
int main()
{
  int x,y,lc,hc;
  cout<<"Enter two number : ";
  cin>>x>>y;
  hc=hcf(x,y);
  lc=(x*y)/hc;
  cout<<endl<<"lCM of the numbers : "<<lc;
  return 0;
}
