#include <iostream>
#include <algorithm>
using namespace std;

// Function to find pair with given difference in the array
// This method handles duplicates in the array
void findPair(int arr[], int n, int diff)
{
	// sort array in ascending order
	sort(arr, arr + n);

	// do for each element in the array
	for (int i = 0; i < n; i++)
	{
		// to avoid printing duplicates (skip adjacent duplicates)
		while (i < n - 1 && arr[i] == arr[i+1])
			i++;

		// perform binary search for element (arr[i] - diff)
		if (binary_search(arr, arr + n, arr[i] - diff))
			cout << "(" << arr[i] << ", " << arr[i] - diff << ")\n";
	}
}

// Find pairs with given difference k in the array
int main()
{
	int arr[] = { 1, 5, 2, 2, 2, 5, 5, 4};
	int diff = 3;

	int n = sizeof(arr) / sizeof(arr[0]);

	findPair(arr, n, diff);

	return 0;
}
