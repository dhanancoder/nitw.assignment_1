#include<iostream>
using namespace std;
int main()
{
	int sum,n,a,b,i;
	cout<<"Write the number upto which you want the average\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"average="<<sum/n<<endl;
	return 0;
}
