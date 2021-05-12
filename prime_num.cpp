#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,c=0;
	cin>>n;
	for(int i=2;i<=n/2+1;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==1)
		cout<<"Prime";
	else
		cout<<"Not prime";
}
