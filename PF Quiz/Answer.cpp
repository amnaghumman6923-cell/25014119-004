#include <iostream>
using namespace std;

int main()
{
	int N;
	cout<<"enter no of clothing items";
	cin>>N;
	
	double price,discountedprice,totalbill=0.0;
	
	for(int i=1;i<=N;i++)
	{
		cout<<"enter price of item";
		cin>>price;
		
		if(price<500)
		{
			discountedprice=price-(price*0.05);
		}
		else
		{
			discountedprice=price-(price*0.10);
		}
		totalbill+=discountedprice;
	}
	cout<<"total bill after discounts";
	
	return 0;
}