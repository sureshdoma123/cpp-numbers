#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,s=0,r;
	cin>>n;
	while(n>9)
	{
		while(n)
		{
			r=n%10;
			n=n/10;
			s+=r*r;
		}
		n=s;
		s=0;
	}
	if(n==0)
	{
		n=s;
	}
	if(n==1 || n==7)
	{
		cout<<"Happy Number";
	}
	else
	{
		cout<<"Not a Happy Number";
	}
	return 0;
}
