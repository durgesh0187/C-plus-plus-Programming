#include <iostream>
using namespace std;

int main()
{
    cout<<"enter size of array"<<endl;
    int n;
    int temp;
    int minIndex;

    cin>>n;
    int arr[n];

    cout<<"enter number in arrays"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Unsorted arrays : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<endl;
    
    
    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for (int j = i+1; j< n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
           temp = arr[minIndex];
           arr[minIndex] = arr[i];
           arr[i] = temp;
    }

    cout<<"Sorted arrays : "<<endl;
    for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}
