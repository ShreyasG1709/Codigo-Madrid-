#include<iostream>
using namespace std;
int main()
{
int steps,s=0,day=0,up=5,down=2;
cout<<"Enter no. of steps"<<endl;
cin>>steps;
cout<<"DAY-5 steps up and NIGHT-2 steps down"<<endl;
for(int z=0;z<steps;z++)
{
if(s<=steps)
{
s=s+up;
day=day+1;
if(s>steps)
{
break;
}
else{
s=s-down;
}
}
}
cout<<"So days required : "<< day<<endl;
return 0;
}
