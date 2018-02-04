#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(void)
{
	float a1, a2, x,i;
	int j,n;
	cout<<"Enter the lowest angle:\n";
	cin>>a1;
	cout<<"Enter the highest angle:\n";
	cin>>a2;
	for(i=a1; i<=a2; i+=0.1)
	{
	   x=sin(i);
	   n= (x*30);
	   if(x>=0)
	   {
	   	 cout<<setw(35)<<"||";
	   	 for(j=1;j<n-1;j++)
	   	 {
	   	 	cout<<'-';
	   	 }
	   	 cout<<'*';
	   }
	   else
	   {
	   	n= -1*n;
	   	cout<<setw(36-n)<<'*';
	   	for(j=1;j<n-1;j++)
	   	{
	   		cout<<'-';
		}
		cout<<"||";
	   }
	   	cout<<"\n";
	}
	return 0;
}
