#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
	long long int arr[4],ans[5],x,y;
	m[4]=1;
	m[8]=2;
	m[15]=3;
	m[16]=4;
	m[23]=5;
	m[42]=6;
	cout<<'?'<<" "<<1<<" "<<1<<endl;
	cin>>arr[0];
	int f5=0;
	for(int j=1;j<=sqrt(arr[0]);j++)
		{
			if(arr[0]%j==0 && (arr[0]/j)==j)
			{
			map<int,int>::iterator itr=m.find(j);
		
			if(itr!=m.end())
			{
				ans[0]=j;
				m.erase(j);
				f5=1;
				break;
			}
			else
			{
				cout<<0<<endl;
				return 0;
			
			}
			}
			
		}
		if(f5==0)
		{
			cout<<0;
			return 0;
		}
	cout<<'?'<<" "<<2<<" "<<2<<endl;
		cin>>arr[1];
		int f6=0;
	for(int j=1;j<=sqrt(arr[1]);j++)
		{
			if(arr[1]%j==0 && arr[1]/j==j)
			{
			map<int,int>::iterator itr=m.find(j);
			if(itr!=m.end())
			{
				ans[1]=j;
				m.erase(j);
				f6=1;
				break;
			}
			else
			{
				cout<<0<<endl;
				return 0;
			
			}
			}
		
		}
		if(f6==0)
		{
			cout<<0;
			return 0;
		}
		cout<<'?'<<" "<<3<<" "<<4<<endl;
		cin>>arr[2];
		int f1=0;
	for(int j=1;j<=sqrt(arr[2]);j++)
		{
			if(arr[2]%j==0)
			{
			map<int,int>::iterator it=m.find(j);
			map<int,int>::iterator ite=m.find(arr[2]/j);
			if(it!=m.end() && ite!=m.end())
			{
				x=j;
				y=arr[2]/j;
				
				f1=1;
			
			
				break;
			}
			
			}
		}
	if(f1==0)
	{
		cout<<0<<endl;
		return 0;
	}

		cout<<'?'<<" "<<4<<" "<<5<<endl;
		cin>>arr[3];
		int f2=0;
	for(int j=1;j<=sqrt(arr[3]);j++)
		{
			if(arr[3]%j==0)
			{
				
			map<int,int>::iterator itq=m.find(j);
			map<int,int>::iterator itm=m.find(arr[3]/j);
			if(itq!=m.end() && itm!=m.end())
			{
		
		
				if(x==j )
				{
					ans[3]=j;
					ans[2]=y;
					ans[4]=arr[3]/j;
					m.erase(j);
				m.erase(arr[3]/j);
				m.erase(y);
				}
				else if(x==arr[3]/j)
				{
					ans[3]=arr[3]/j;
					ans[2]=y;
					ans[4]=j;
					m.erase(j);
				m.erase(arr[3]/j);
				m.erase(y);
				}
					else if(y==j)
				{
					ans[3]=j;
					ans[2]=x;
					ans[4]=arr[3]/j;
						m.erase(j);
				m.erase(arr[3]/j);
				m.erase(x);
				}	else if(y==arr[3]/j)
				{
					ans[3]=arr[3]/j;
					ans[2]=x;
					ans[4]=j;
						m.erase(j);
				m.erase(arr[3]/j);
				m.erase(x);
				}
				f2=1;
				
				break;
			}
			
			}
		}
	if(f2==0)
	{
		cout<<0<<endl;
		return 0;
	}
	cout<<'!'<<" ";
	for(int i=0;i<5;i++)
	{
		cout<<ans[i]<<" ";
	}
	map<int,int>::iterator itb=m.begin();
	cout<<itb->first;
	return 0;
}
