#include<iostream>
using namespace std;
int main()
{
	int ans,n,a,b,i;
	cout<<"Write the number upto which you want the sum of squares\t";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		ans=ans+i*i;
	}
	cout<<"sum of the squares is\t"<<ans<<endl;
	return 0;
}
