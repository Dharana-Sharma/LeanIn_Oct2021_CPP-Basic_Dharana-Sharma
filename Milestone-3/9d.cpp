//Create a 3-D matrix of any size and then display it.
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"enter the value of the three dimensions of the matrix";
	cin>>x>>y>>z;
	
	int arr[x][y][z];
	cout<<"enter the values in the matrix";
	for(int i=0;i<x;i++) 
		for(int j=0;j<y;j++)
			for(int k=0;k<z;k++)
				cin>>arr[x][y][z];
	cout<<endl;
	for(int i=0;i<x;i++) {
		for(int j=0;j<y;j++) {
			for(int k=0;k<z;k++)
				cout<<arr[x][y][z];
			cout<<endl;
		}
	}
	return 0;
}