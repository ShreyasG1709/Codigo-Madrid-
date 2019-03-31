#include<iostream>

using namespace std;
int main()
{
int num,n;
cout<<"Enter a no. to check whteher it is in power of 2 "<<endl;
cin>>num;
n=num-1;
if((num&n)==0)
{
cout<<"The given integer is in power of 2 "<<endl;
}
else{
cout<<"Not in power of 2"<<endl;
}
return 0;
}
