#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e;
	cout<<"distance in Kilometer is ";
	cin>>a;
	b=a*1000;
	c=a*3280.84;
	d=a*39370.1;
	e=a*100000;
	cout<<"distance in meter is"<<b<<endl;
	cout<<"distance in feet is "<<c<<endl;
	cout<<"distance in inch is "<<d<<endl;
	cout<<"distance in centimeter is "<<e<<endl;
	return 0;
}
