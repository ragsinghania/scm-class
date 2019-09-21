#include<iostream>
using namespace std;



int main()
{
int a[]={12,33,15,20,27,37,42,13};
int size=8;
for(int k=0;k<size-1;k++)
for(int i=0;i<size;i++)
{
	if(i==0)
	{
		if(a[1]<a[0])
		{
			if(a[1]==2)
			a[0]=1;
			else if(a[1]==1)
			a[0]=2;
			else
			a[0]=1;
		}
	}
	else if(i==(size-1))
	{
		if(a[size-2]<a[size-1])
		{
			if(a[size-2]==2)
			a[size-1]=1;
			else if(a[size-2]==1)
			a[size-1]=2;
			else
			a[size-1]=1;
		
		}
	}
	else 
	{
		if(a[i-1]<a[i]&&a[i]>a[i+1])
		{
			if((a[i-1]==2&&a[i+1]==1)||(a[i-1]==1&&a[i+1]==2))
			{
			a[i]=3;
			}
			else if(a[i-1]==1||a[i+1]==1)
			a[i]=2;
			else 
			a[i]=1;
		
		}
	}
		
	
}

for(int j=0;j<size;j++)
{cout<<a[j]<<" ";}
return 0;
}
