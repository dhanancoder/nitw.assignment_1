#include<iostream>
using namespace std;
int main()
{
	int two_thousand, five_hundred, one_hundred, fifty, twenty, ten, five, two, one, amount;
	cout<<"Enter the amount of money ";
	cin>>amount;
	two_thousand=amount/2000;
	five_hundred=(amount%2000)/500;
	one_hundred=(amount%2000%500)/100;
	fifty=(amount%2000%500%100)/50;
	twenty=(amount%2000%500%100%50)/20;
	ten=(amount%2000%500%100%50%20)/10;
	five=(amount%2000%500%100%50%20%10)/5;
	two=(amount%2000%500%100%50%20%10%5)/2;
	one=(amount%2000%500%100%50%20%10%5%2);
	cout<<"Two Thousand rupee notes "<<two_thousand<<endl;
	cout<<"Five Hundred rupee notes "<<five_hundred<<endl;
	cout<<"One Hundred rupee notes "<<one_hundred<<endl;
	cout<<"Fifty rupee notes "<<fifty<<endl;
	cout<<"Twenty rupee notes "<<twenty<<endl;
	cout<<"Ten rupee notes "<<ten<<endl;
	cout<<"Five rupee notes "<<five<<endl;
	cout<<"Two rupee coins "<<two<<endl;
	cout<<"One rupee coins "<<one<<endl;
	return 0;
}
