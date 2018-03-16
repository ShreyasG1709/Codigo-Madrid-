#include <iostream>
#include<stdlib.h>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
int sum=0,rem;
string a;

cout<<"enter a no."<<endl;
cin>>a;
int s[10]={6,2,5,5,4,5,6,3,7,6};
for(int i=0;a[i]!='\0';i++)
{
    int temp=a[i];
    sum=sum+s[temp-48];
}
cout<<"total no. of lines"<<sum<<endl;
	return 0;
}
