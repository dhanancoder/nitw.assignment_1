#include<iostream>
using namespace std;
int main()
{
	int num[10], count,i;
	cout<<"Enter 10 numbers\n";
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<10;i++)
	{
		if(num[0]<num[i])
		{
			num[0]=num[i];
		}
	}
	cout<<"The Greatest Number is "<<num[0]<<endl;
	for(i=0;i<10;i++)
	{
		if(num[0]==num[i])
		count=count+1;
	}
	cout<<"And Its Frequency is "<<count-1<<endl;
	return 0;
}
