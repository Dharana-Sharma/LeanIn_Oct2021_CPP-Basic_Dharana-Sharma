//Write a program to implement linear search using function.
#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int size;
	cout<<"enter the size of array:";
	cin>>size;
    int arr[size],i,element;
    cout<<"\nenter "<<size<<" elements in array for searching : ";
    for (i=0;i<size;i++)
        cin>>arr[i];

    cout<<"\nenter element to search : ";
    cin>>element;
    
    int index=search(arr,size,element);
    	if (index==-1)
        	cout<<"\nelement is not present in the array";
    	else
        	cout<<"\nelement found at position " << index+1<<" index "<<index;
  
    return 0;
}
/*
OUTPUT 1-
enter the size of array:6

enter 6 elements in array for searching : 7 3 9 4 2 6

enter element to search : 9

element found at position 3 index 2

OUTPUT 2-
enter the size of array:4

enter 4 elements in array for searching : 1 2 3 4

enter element to search : 7

element is not present in the array

*/