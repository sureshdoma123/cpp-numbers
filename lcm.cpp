#include<bits/stdc++.h>
using namespace std;
main()
{
	int n1,n2,r=2,res=1;
	cout<<"Enter two inputs : ";
	cin>>n1>>n2;
	while(true)
	{
		if(n1%r==0 && n2%r==0)
		{
			n1=n1/r;
			n2=n2/r;
			res=res*r;
		}
		else
			r+=1;
		if (n1<r || n2<r)
			break;
	}
	cout<<"LCM is : "<<res*n1*n2;
}
