/*A
A B
A B C
A B C D
A B C D E*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(char i=65;i<65+n;i++){
		for(char j=65;j<=i;j++)
		cout<<j;
	
	cout<<endl;
	}
	return 0;
}

/*Enter number of rows(n):3
A
AB
ABC*/