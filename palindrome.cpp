#include<bits\stdc++.h>
using namespace std;
msin()
{
	int n,r,s=0,pn;
	cin>>n;
	pn=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s==pn)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not a palindrome";
	}
}
