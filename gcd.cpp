#include<bits\stdc++.h>
using namespace std;
main()
{
	int n1,n2;
	cout<<"Enter the two numbers : ";
	cin>>n1>>n2;
	while(true)
	{
		if(n1<n2)
		{
			swap(n1,n2);
		}
		else
		{
			n1=n1%n2;
		}
		if(n1==0)
		{
			break;
		}
	}
	cout<<"GCD is : "<<n2;
}
