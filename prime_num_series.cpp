//Prime numbers Series upto n numbers
#include <iostream>
using namespace std;

int primenumber(int);

int main()
{
   int isprime;
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   for(int i=2;i<n;i++) 
   {
      isprime=primenumber(i);

      if(isprime==1)
         cout<<i<<" ";
   }
}

int primenumber(int n) 
{
   int isprime=1,i=2;

   while(i<=n/2) 
   {
      if(n%i==0) 
	  {
         isprime=0;
         break;
      }
	   i++;
   }  
   return isprime;
}
