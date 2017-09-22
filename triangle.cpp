#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"enter the three sides of trianglen\n";

	cin>>a>>b>>c;
	if((a+b>c)||(b+c>a)||(a+c>b))
	
	if(a==b&&b==c)
	{
	 cout<<"triangle is equilateral triangle\n";
	}
    else if(a!=b&&b!=c&&c!=a)
	{
		if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==b*b+a*a)
    {
            cout<<"The triangle is right triangle";
	}
	    else
	        cout<<"triangle is scalene triangle\n";
    }
	else if((a==b&&a!=c)||(b==c&&c!=a)||(a==c&&c!=b))
	{
	 cout<<"triangle is isosceles triangle\n";
    }
    else
    cout<<"Its not a triangle";
    
     return 0;
     
}
