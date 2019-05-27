#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>m;
bool check(long long int n)
{
	for(long long int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				map<long long int,long long int>::iterator itr=m.find(i);
				if(itr==m.end())
				{
					return false;
				}
			}
			else
			{
				map<long long int,long long int>::iterator itr=m.find(i);
				if(itr==m.end())
				{
					return false;
				}
				itr=m.find(n/i);
				if(itr==m.end())
				{
					return false;
				}
				
			}
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		long long int arr[n];
		for(int j=0;j<n;j++)
		{
			long long int x;
			cin>>x;
			arr[j]=x;
			m[x]=0;
		}
		sort(arr,arr+n);
		int f=0;
		map<long long int,long long int>::iterator it=m.begin();
		for(long long int j=0;j<n;j++)
		{
			if(!check(it->first))
			{
				cout<<-1<<endl;
				f=1;
				break;
			}
			it++;
		}
	
		if(f==0 && n!=1)
		{
			long long int l=0,r=n-1;
			long long int ans=arr[0]*arr[n-1];
			long long int f2=0;
			while((r-l)>=0)
			{
				if((arr[l]*arr[r])!=ans)
				{
					cout<<-1<<endl;
					f2=1;
					
				
					break;
				}
				l=l+1;
				r=r-1;
			}
			if(f2==0)
			{
				cout<<ans<<endl;
			}
			
		}	
		else if(f==0 && n==1)
		{
			cout<<arr[0]*arr[0]<<endl;
		}
		
		
		m.clear();
	}
}
