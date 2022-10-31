#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b)
{
	if(a.second>b.second)
	{
		return true;
	}
	else if(a.second==b.second)
	{
		if(b.first>a.first)
		{
			return true;
		}
		else
		return false;
	}
	return false;
}
int main() {
	int key;
	int n;
	cin>>key>>n;
	pair<string,int>arr[n];
	int a;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s>>a;
		arr[i]=make_pair(s,a);
	}
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(arr[i].second>=key)
		{
			cout<<arr[i].first<<" "<<arr[i].second<<endl;
		}
	}
	return 0;
}
