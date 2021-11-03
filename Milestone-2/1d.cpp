/* Pattern 4:
(Ex: n=5)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++)
		cout<<j;
	
	cout<<endl;
	}
	return 0;
}
/*Enter number of rows(n):7
1
12
123
1234
12345
123456
1234567*/