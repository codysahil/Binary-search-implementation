#include<iostream>
using namespace std;

int binarySearch(int low, int high, int key,int arr[]) {
	while (low <= high) {
		int mid = (low + high) / 2;
		if (key == arr[mid])
			return mid;
		else if (key < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{
	
	int arr[] = {2,4,6,8,10,12,14,16};
	for (int i = 0; i < 8; i++) {
		cout << arr[i]<<" "<<endl;
	}
	int x;

	cout << "enter key to be found"<<endl;
	cin >> x;
	binarySearch(0, 7,x, arr);
	cout << "The key element is at index: "<< binarySearch(0, 7, x, arr);
	return 0;
}