//Write a program to implement binary search using function.
#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int i,l,h=n-1,mid;
    while(l<=h)
    {mid=(l+h)/2;
    	if (arr[mid]>x)
    		h=mid-1;
    	else if (arr[mid]<x)
    		l=mid+1;
	else
            return mid;
	}
	return -1;
}

int main()
{
   int size;
	cout << "enter the size of array:";
	cin>>size;
    int arr[size],i,element;
    cout << "\nEnter "<<size<<" elements of array for searching : ";
    for (i=0;i<size;i++)
        cin >> arr[i];

    cout << "\nenter element to search : ";
    cin>>element;

    search(arr,size, element);

   int index=search(arr,size,element);
    if (index==-1)
        cout<<"\nelement is not present in the array";
    else
        cout<<"\nelement found at position "<<index+1<<" index "<<index;
  
    return 0;
}
/*
OUTPUT 1-
enter the size of array:6

Enter 6 elements of array for searching : 1 2 3 4 5 6

enter element to search : 4

element found at position 4 index 3

OUTPUT 2-
enter the size of array:4

enter 4 elements in array for searching : 1 2 3 4

enter element to search : 7

element is not present in the array

*/