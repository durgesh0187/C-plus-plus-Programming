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
	
	if(n<2)
	{
		cout<<"No pair exists"<<endl;
	}
	
	int a=arr[0], b=arr[1];
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[j]*arr[k] > a*b)
			{
				a=arr[j];
				b=arr[k];
			}
		}
	}
	
	cout<<"Maximum product of pair is: {"<<a<<","<<b<<"}"<<endl;
	return 0;
}

