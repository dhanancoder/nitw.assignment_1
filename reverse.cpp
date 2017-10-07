//reverse of the digits
#include<iostream>
using namespace std;
int main()
{
	int x,num,d;
	cout<<"Enter the NUMBER ";
	cin>>num;
	while(num!=0)
	{
		x=num%10;
		d=10*d+x;
		num=num/10;
	}
	cout<<"The required number is "<<d<<endl;
	return 0;
}
