//Factors of a number 

#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,c=0,i=1;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Factors is: ";
	while(i<=n)
	{
		if(n%i==0)
			cout<<i<<" ";
		i++;
	}
}
