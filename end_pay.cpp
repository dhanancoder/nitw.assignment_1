#include<iostream>
using namespace std;
int main()
{
	double extra_hours, no_of_child, end_pay;
	cout<<"Enter the number of extra hours worked ";
	cin>>extra_hours;
	cout<<"Enter the number of children ";
	cin>>no_of_child;
	end_pay=1200*30*(1-7/100+no_of_child*2/100);
	cout<<"The net pay of the employee is "<<end_pay<<endl;
	return 0;
}
