#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10;
	int s[n];
	int a[n];
	int num[n];
	cout<<"enter s and e time"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>s[i]>>a[i];num[i]=i+1;
	}
	
	//SORT
	for(int i=0;i<n-1;i++)
	{	
		int p=i;
		int min=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{min=a[j];p=j;}
		}
		int t=a[i];
		a[i]=min;
		a[p]=t;
		int t1=s[i];
		s[i]=s[p];
		s[p]=t1;
		int t2=num[i];
		num[i]=num[p];
		num[p]=t2;
	}
	//SORT END
	cout<<"sorted array :"<<endl;
	for(int i=0;i<n;i++){cout<<s[i]<<' '<<a[i]<<endl;}
	int c=0;
	cout<<"number of tasks alloted: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i+1]>=a[i]){c++;cout<<num[i]<<endl;}
	}
	cout<<"Maximum number of meetings scheduled: "<<c<<endl;
}

