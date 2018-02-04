#include<bits/stdc++.h>

using namespace std;

void sum(char a[],char b[])
{
    int carry=0,i,j=0,s,k=0;
    int l1=strlen(a);
    int l2=strlen(b);
    char sum[100];

    for(i=0;i<=l1-1||j<=l2-1;i++)
    {
        if(i<=l1-1&&j<=l2-1)
            s=(int)a[i]-'0'+(int)b[j]-'0'+carry;
        if(i>l1-1&&j<=l2-1)
            s=(int)b[j]-'0'+carry;
        if(i<=l1-1&&j>l2-1)
            s=(int)a[i]-'0'+carry;

        carry=s/10;
        sum[k++]=char(s%10+'0');
        j++;
    }

    if(carry!=0)
        sum[k++]=carry+'0';
    sum[k++]='\0';

    for(int i=0;i<strlen(sum);i++)
        {
           b[i]=sum[i];
        }
}


int main()
{
    string a,b;
cout<<"Enter the nos. to be multiplied\n";
getline(cin,a);
getline(cin,b);

int A,B,l1=a.length(),l2=b.length();

char mult[100][100],final[100];
int l,k=0,p,carry=0;

for(int i=l1-1;i>=0;i--)
{
     for(p=0;p<k;p++)
        {
            mult[k][p]='0';
        }
     l=p;
    for(int j=l2-1;j>=0;j--)
    {
        int s;
       s=((int)a[i]-'0')*((int)b[j]-'0')+carry;

       carry=s/10;
       s=s%10;
        mult[k][l++]=char(s+'0');
    }
    if(carry!=0)
        mult[k][l++]=char(carry+'0');
    mult[k][l++]='\0';
    k++;carry=0;

}

for(int i=0;i+1<k;i++)
{
    sum(mult[i],mult[i+1]);
}
cout<<"The answer is\n";

for(int i=strlen(mult[k-1])-1;i>=0;i--)
    cout<<mult[k-1][i];
return 0;
}
