\\ print pascal triangle \\
#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,a[100][100];
	cout<<"Enter no of Lines:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<=i;j++)
		{
			if(i==j||j==0)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			cout<<a[i][j]<<" ";
		}
	}
}


/*
Pascal Triangle 

1
1 1
1 2  1
1 3  3  1
1 4  6  4 1
1 5 10 10 5 1
*/
