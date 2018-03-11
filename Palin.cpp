#include<iostream>
using namespace std;
int main()
{
int n,n1,d,rn;
cout<<"Enter a NO. to check Palindrome"<<endl;
cin>>n;
rn=0;
n1=n;
while(n>0)
{
d=n%10;
rn=(rn*10)+d;
n/=10;
}
if(n1==rn)
{
cout<<"It is a palindrome no."<<n;
}
else
{
cout<<"It is not a Palindrome"<<endl;
}
return 0;
}
