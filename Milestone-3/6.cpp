//6. Merge array1 and array2 into a single array.
#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"enter the size of array1:";
	cin>>n;
	cout<<"enter the size of array2:";
	cin>>m;
	
	int array1[n],array2[m];
	cout<<"enter the elements of array1:";
	for(int i=1;i<=n;i++)
		cin>>array1[i];
		
	cout<<"enter the elements of array2:";
	for(int i=1;i<=m;i++)
		cin>>array2[i];
	
	cout<<"merged array:";
		for(int i=1;i<=n;i++)
			cout<<array1[i]<<" ";
			
		for(int j=1;j<=m;j++)
			cout<<array2[j]<<" ";
	
	return 0;
}
/*enter the size of array1:3
enter the size of array2:4
enter the elements of array1:1 2 3
enter the elements of array2:4 5 6 7
merged array:1 2 3 4 5 6 7*/