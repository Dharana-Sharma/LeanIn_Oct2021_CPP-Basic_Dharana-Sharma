/*
A
B B
C C C
D D D D
E E E E E*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(char i=65;i<65+n;i++){
		for(char j=65;j<=i;j++)
		cout<<i<<" ";
	
	cout<<endl;
	}
	return 0;
}
/*Enter number of rows(n):5
A
B B
C C C
D D D D
E E E E E*/
