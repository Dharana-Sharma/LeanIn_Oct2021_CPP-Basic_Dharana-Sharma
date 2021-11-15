/*7. Create an array and then update its elements' value as the sum of current and pervious elements.
(EX: original array - 20 10 5 3 80 55
     updated array  - 20 30 35 38 118 173 )*/ 
#include <iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n];
	
	cout<<"enter the elements of array:";
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
	for(int i=1;i<=n;i++)
		{
		arr[i]=arr[i]+arr[i-1];
		}
	cout<<"updated array:";
	 for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	return 0;
}
/*
enter the size of array:3
enter the elements of array:1 2 3
updated array:1 3 6
*/	  
	
	
	