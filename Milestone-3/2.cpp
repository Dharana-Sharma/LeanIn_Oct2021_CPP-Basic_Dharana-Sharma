//2. Display sum of elements in an array.
#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	
	cout<<"enter the size of array:";
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements of array:";
		for( i=1;i<=n;i++)
			cin>>arr[i];
	
		for( i=1;i<=n;i++){
			sum=sum+arr[i];}
		
		cout<<"sum is:"<<sum<<" ";

	return 0;
}
/*enter the size of array:3
enter the elements of array:2 3 4 
sum is:9*/