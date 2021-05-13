#include<bits\stdc++.h>
using namespace std;
int primenum(int);
main()
{
	int n,isprime;
	long a[100];
	cout<<"Enter no of Test cases: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter array element "<<i<<" : ";
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		isprime=primenum(a[j]);
		
		if(isprime==1)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;
		
	}
}
int primenum(int n)
{
	int isprime=1,i=2;
	while(i<=sqrt(n))
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}
		i++;
	}
	return isprime;	
}
