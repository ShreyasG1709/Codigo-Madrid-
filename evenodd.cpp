#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no. to check even/odd"<<endl;
cin>>n;
if((n&1)==1)
{
cout<<"It is a ODD no."<<endl;
}
else
{
cout<<"It is EVEN no."<<endl;
}
return 0;
}
