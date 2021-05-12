//Method 1(Range 2 to n-1)

#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,c=0,i=2;
	cout<<"Enter a number: ";
	cin>>n;
	while(i>=n-1)
	{
		if(n%i==0)
			c++;
			break;
		i++;
	}
	if(c==0)
		cout<<"Prime number";
	else
		cout<<"Not a Prime number";
}

//Method 2(Range 1 to n/2)
/*
#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,c=1,i=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(i>=(n/2))
	{
		if(n%i==0)
			c++;
			break;
		i++;
	}
	if(c==1)
		cout<<"Prime Number";
	else
		cout<<"Not a Prime Number";
}
*/
//Method 3(upto square root of n)
/*
#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,c=0,i=2;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=sqrt(n))
	{
		if(n%i==0)
			c++;
			break;
		i++;
	}
	if(c==0)
		cout<<"Prime NUmber";
	else
		cout<<"Not a Prime Number";
	
}
*/
