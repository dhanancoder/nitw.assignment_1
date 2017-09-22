#include<iostream>
using namespace std;
int main()
{
	double a,b,d=0,c;
	while(c<=50000)
	{
		d=d+1;
		c=d*1.5*9000;
	}
	cout<<"\n";
	cout<<"The population will cross 50000 in next "<<d<<" years."<<endl;
	cout<<"Give the number of years you after which you want the annual population\n";
	cin>>a;
	b=a*1.5*9000;
	cout<<"The annual population in next "<<a<<" year is "<<b;
	return 0;
}
