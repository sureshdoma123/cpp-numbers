#include<bits\stdc++.h>
using namespace std;
main()
{
	int n,r,ec=0,oc=0,tc=0;
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
			ec+=1;
		else
			oc+=1;
		tc+=1;
	}
	cout<<"Even count : "<<ec<<endl;
	cout<<"Odd count : "<<oc<<endl;
	if(ec==tc)
		cout<<"Strongly Even number"<<endl;
	else if(oc==tc)
		cout<<"Strongly odd number"<<endl;
	else
		cout<<"Mixed number"<<endl;
	
}
