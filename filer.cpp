#include<bits/stdc++.h>

using namespace std;

int top=0;
//char stak[100];

void print(int a)
{
	cout<<setw(5*a)<<" ";
}

int main()
{
string str;
fstream file;
file.open("indent.txt",ios::in);

if(file==NULL)
	return 0;

char d;
while(!file.eof())
{int i=0;
	getline(file,str,';');
	str.push_back(';');

	for(;i<str.length();i++)
	{
		if(str[i]=='{')
			top++;
		if(str[i]=='}')
			top--;
		if(str[i+1]=='{')
		{
			cout<<str[i];
			cout<<endl;
			cout<<setw(5*top)<<" ";
			continue;
		}
		if(str[i+1]=='}')
		{	
			cout<<str[i]<<endl;
			cout<<setw(5*top)<<" ";
			continue;
		}
		if(str[i-1]=='{')
		{
			cout<<endl;
			cout<<setw(5*top)<<" "<<str[i];
			continue;
		}
		if(str[i-1]=='}')
		{//top--;
			cout<<endl;
			cout<<setw(5*top)<<" "<<str[i];
			continue;
		}

		cout<<str[i];
	}
	cout<<endl<<setw(5*top)<<" ";

}
return 0;
}
