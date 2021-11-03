/*Pattern 2:
(Ex: n=5)
*
**
***
****
*****    */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++)
		cout<<"* ";
	
	cout<<endl;
	}
	return 0;
}
/*
Enter number of rows(n):7
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *           */