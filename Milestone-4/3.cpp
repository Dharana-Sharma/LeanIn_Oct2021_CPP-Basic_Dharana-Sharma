//3. WAP using function to Insert a no. at a given position in an arr
#include<iostream>
using namespace std;

void insertposition(int arr[],int *n,int x,int pos) {
	int i;
	for(i=(*n)-1;i>=pos-1;i--)
		arr[i+1]=arr[i];
	arr[pos-1]=x;
	(*n)++;
}


int main()
{
int n,pos,x;
cout<<"enter the size of array:";
cin>>n;
int arr[n];
cout<<"enter the array:";
for(int i=0;i<n;i++)
cin>>arr[i];

cout<<"display the array:";
for(int i=0;i<n;i++)
cout<<arr[i];

cout<<"\nenter the no. to be inserted and its position:";
cin>>x>>pos;

insertposition(arr,&n,x,pos);

cout<<"updated array:";
for(int i=0;i<n;i++)
cout<<arr[i];

return 0;
}

/*
enter the size of array:4
enter the array:1 2 4 5
display the array:1245
enter the no. to be inserted and its position:3 3
updated array:12345
*/