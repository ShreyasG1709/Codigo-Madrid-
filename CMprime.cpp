#include<iostream>
using namespace std;
int main()
{
int a,i,b;
cout<<"Enter no. to check whether it is prime no."<<endl;
cin>>a;
b=a/2;
for(i=2;i<=b;i++)
{
if(a%i==0)
{
cout<<"It is not a Prime no."<<endl;
break;
}
}
if(i==b+1)
{
cout<<"It is Prime no.";
}
return 0;
}
