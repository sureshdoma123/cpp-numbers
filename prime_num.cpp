//Method 1//
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,c=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
		cout<<"Prime";
	else
		cout<<"Not prime";
}

//Method 2//
#include<bits/stdc++.h>
using namepace std;
main()
{
	int c=0,n;
	cout<<"Enter a Number: ";
	for(int i=2;i<=(n/2)+1;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==1)
		cout<<"Prime number";
	else
		cout<<"Not a Prime number";
	return 0;
}

//Method 3//
#include<bits\
