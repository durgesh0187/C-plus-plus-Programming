#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int n)
{
	int item,pos;
	cout<<"Enter the postion of the element: "<<endl;
	cin>>pos;
	cout<<"Enter the element: "<<endl;
	cin>>item;
	
	for(int i=n;i>=pos;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[pos-1]=item;
	n++;
	
	return n;
}


void display(int arr[], int n)
{
	cout<<"Element of array are: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


void search(int arr[], int n)
{
	int i,item,flag=0;
	cout<<"Enter the element to search: "<<endl;
	cin>>item;
	
	for(int i0;i<n;i++)
	{
		if(item==arr[i])
		{
			flag=1;
			cout<<"Element found at position: "<<endl;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found: "<<endl;
	}
}


int Delete(int arr[], int n)
{
	int pos;
	cout<<"Enter the postion to delete the element: "<<endl;
	cin>>pos;
	
	for(int i=pos-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"Element after deletion: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	
	return n;
}


void sort(int arr[], int n)
{
	int min,temp,index;
	
	for(int i=0;i<n-1;i++)
	{
		min=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				index=j;
			}
		}
		if(min!=arr[i])
		{
			temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
	}
	cout<<"Element after sorting: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;	
}


void merge(int arr[], int n)
{
	int index=0,arr1[100],arr2[100];
	
	cout<<"Enter the elements in second array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	
	for(int i=0;i<n;i++)
	{
		arr2[index]=arr[i];
		index++;
	}
	
	for(int i=0;i<n;i++)
	{
		arr2[index]=arr1[i];
		index++;
	}
	
	cout<<"Elements after merging: "<<endl;
	
	for(int i=0;i<n+n;i++)
	{
		cout<<arr2[i];
	}
	cout<<endl;
}



int main()
{
	int choice,n, arr[100],item;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the element of array: "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	while(1)
	{
	    cout<<"1. Inserting a new element"<<endl;
	    cout<<"2. Dispay the array element"<<endl;
	    cout<<"3. Search the element"<<endl;
	    cout<<"4. Delete the element"<<endl;
	    cout<<"5. Sort array element"<<endl;
	    cout<<"6. Merging tow element"<<endl;
	    cout<<"7. Exit"<<endl;
	    cout<<"8. Enter your choice"<<endl;
	    cin>>choice;
	    
	    switch(choice)
	    {
	    	case 1:n=insert(arr,n);
	    		break;
	    	case 2: display(arr,n);
	    		break;
	    	case 3: search(arr,n);
	    		break;
	    	case 4: Delete(arr,n);
	    		break;
	    	case 5: sort(arr,n);
	    		break;
	    	case 6: merge(arr,n);
	    		break;
	    	case 7: exit(0);
	    		break;
	    	default:
	    		cout<<"You have entered worng choice ! !"<<endl;
	    	
		}
	}
	return 0;
}
