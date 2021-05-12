#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,r,s=0;
	cout<<"Enter the number : ";
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	cout<<"The reverse of the num is : "<<s;
}
