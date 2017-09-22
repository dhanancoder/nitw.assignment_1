//prime number bellow 1000.
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=3;i<=1000;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count=count+1;
		}
		if(count==2)
		cout<<i<<" is a prime number\n";
	}
	return 0;
}
