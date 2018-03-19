#include<iostream>
using namespace std;
int main()
{
int a,count1=0,count0=0;
cout<<"Enter an integer"<<endl;
cin>>a;
while(a)
{
if(a&1)
{
count1=count1+1;
}
else
{
count0=count0+1;
}
a=a>>1;
}
cout<<"No. of 1's :"<<count1<<endl;
cout<<"No. of 0's :"<<count0<<endl;
return 0;
}
