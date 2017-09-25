#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the angles of the triangle\n";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a+b+c==180)
	{
		if(a==b&&b==c)
		cout<<"The triangle is equilateral";
		else if((a==b&&b!=c&&c==90)||(b==c&&b!=a&&a==90)||(a==c&&a!=b&&b==90))
		cout<<"The triangle is isoscles as well as right angled";
		else if((a==b&&b!=c)||(b==c&&b!=a)||(a==c&&a!=b))
		cout<<"The triangle is isoscles";
		else if(a!=b&&b!=c&&c!=a&&(a==90||b==90||c==90))
		cout<<"The triangle is scalen as well as right triangle";
		else if(a!=b&&b!=c&&c!=a)
		cout<<"The triangle is scalen";
	}
	else
	cout<<"Its not a triangle";
	return 0;
}
