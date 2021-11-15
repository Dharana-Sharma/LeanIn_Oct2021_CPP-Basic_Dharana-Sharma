//1. Create a character array of size n and display its content.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of array:";
	cin>>n;
	char arr[n];
	
	cout<<"enter the elements of array:";
		for(int i=1;i<=n;i++)
			cin>>arr[i];
	
	cout<<"elements of the array are:";
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
	
	return 0;
}
/*enter the size of array:3
enter the elements of array:a b c
elements of the array are:a b c*/