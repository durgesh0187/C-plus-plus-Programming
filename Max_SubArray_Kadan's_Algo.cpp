#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int s=0, max=INT_MIN;
	if(n==0)
	{
		return 0;
	}
	
	for(int i=0;i<n;i++)
	{
		s=s+arr[i];
		if(s>max)
		{
			max=s;
		}
		else if(s<=0)
		{
			s=0;
		}
	}
	cout<<"Maximum subarray is: "<<max<<endl;
	return 0;
}

